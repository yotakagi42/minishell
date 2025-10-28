/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagisa <nagisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:50:58 by yotakagi          #+#    #+#             */
/*   Updated: 2025/06/16 21:48:49 by nagisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <unistd.h>

int minishell_pwd(t_shell *shell, t_cmd *cmd)
{
	char buf[1024];

	(void)cmd;
	if (getcwd(buf, sizeof(buf)))
	{
		ft_putstr_fd(buf, 1);
		write(1, "\n", 1);
		shell->error_num = 0;
	}
	else
	{
		perror("minishell: pwd");
		shell->error_num = 1;
	}
	return (shell->error_num);
}
