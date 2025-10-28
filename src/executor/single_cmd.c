/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:14:16 by nagisa            #+#    #+#             */
/*   Updated: 2025/10/10 17:54:03 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	single_cmd(t_cmd *cmd, t_shell *shell)
{
	pid_t pid;
	int status;
	if (cmd->builtin == minishell_cd || cmd->builtin == minishell_exit
		|| cmd->builtin == minishell_export || cmd->builtin == minishell_unset)
	{
		shell->error_num = cmd->builtin(shell, cmd);
		return ;
	}
	pid = fork();
	if (pid < 0)
		ft_error(3, shell);
	if (pid == 0)
		exec_cmd(shell->cmd, shell);
	// 子の終了待ち
	waitpid(pid, &status, 0);
}