/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:58:12 by yotakagi          #+#    #+#             */
/*   Updated: 2025/10/01 12:02:35 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static char	*get_oldpwd(void)
{
	return (getenv("OLDPWD"));
}
static void	update_pwd_oldpwd(char *oldpwd, t_shell *shell)
{
	char	cwd[1024];

	(void)shell; // shell が不要なら明示的に未使用にする
	if (!getcwd(cwd, sizeof(cwd)))
		return ;
	/* ここで直接環境変数を更新する */
	setenv("PWD", cwd, 1);
	setenv("OLDPWD", oldpwd, 1);
}

int	minishell_cd(t_shell *shell, t_cmd *cmd)
{
	char	*path;
	char	oldpwd[1024];

	if (!getcwd(oldpwd, sizeof(oldpwd)))
		oldpwd[0] = '\0';
	if (!cmd->str[1])
	{
		path = getenv("HOME");
		if (!path)
		{
			ft_putstr_fd("minishell: cd: HOME not set\n", 2);
			return (1);
		}
	}
	else if (ft_strcmp(cmd->str[1], "-") == 0)
	{
		path = get_oldpwd();
		if (!path)
		{
			ft_putstr_fd("minishell: cd: OLDPWD not set\n", 2);
			return (1);
		}
		ft_putendl_fd(path, 1);
	}
	else
		path = cmd->str[1];
	printf("[cd] path = \"%s\"\n", path);
	if (chdir(path) == -1)
	{
		perror("minishell: cd");
		return (1);
	}
	update_pwd_oldpwd(oldpwd, shell);
	return (0);
}
