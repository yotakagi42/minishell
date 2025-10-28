/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 10:57:24 by nagisa            #+#    #+#             */
/*   Updated: 2025/10/13 00:24:07 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	cmd_not_found(char *str)
{
	ft_putstr_fd("minishell: ", STDERR_FILENO);
	ft_putstr_fd(str, STDERR_FILENO);
	ft_putstr_fd(": command not found\n", STDERR_FILENO);
	return (127); // TODO why?
}

// コマンドが外部コマンドの場合
int	find_cmd(t_cmd *cmd, t_shell *shell)
{
	int		i;
	char	*cmd_path;

	i = 0;
	while (shell->paths[i])
	{
		cmd_path = ft_strjoin(shell->paths[i], cmd->str[0]);
		if (!access(cmd_path, F_OK)) // ファイルが存在するか確認する
			execve(cmd_path, cmd->str, shell->env);
		free(cmd_path);
		i++;
	}
	return (cmd_not_found(cmd->str[0]));
}

//それぞれのコマンドを実行
void	exec_cmd(t_cmd *cmd, t_shell *shell)
{
	int	exit_code;

	exit_code = 0;
	// TODO リダイレクト
	// cmdがビルトインの場合
	if (cmd->builtin != NULL)
	{
		exit_code = cmd->builtin(shell, cmd);
		exit(exit_code);
	}
	// cmdが外部コマンドの場合
	else if (cmd->str[0][0] != '\0')
		exit_code = find_cmd(cmd, shell);
	exit(exit_code);
}
