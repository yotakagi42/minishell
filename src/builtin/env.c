/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 05:27:29 by yotakagi          #+#    #+#             */
/*   Updated: 2025/06/18 05:27:51 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	minishell_env(t_shell *shell, t_cmd *cmd)
{
	int	i;

	(void)cmd;
	i = 0;
	while (shell->env && shell->env[i])
	{
		if (ft_strchr(shell->env[i], '='))
		{
			ft_putstr_fd(shell->env[i], 1);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
