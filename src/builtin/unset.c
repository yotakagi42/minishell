/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagisa <nagisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 04:41:09 by yotakagi          #+#    #+#             */
/*   Updated: 2025/06/25 19:52:15 by nagisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	minishell_unset(t_shell *shell, t_cmd *cmd)
{
	int		i;
	char	*key;

	i = 1;
	while (cmd->str[i])
	{
		key = cmd->str[i];
		if (!is_valid_key(key))
			export_error(key);
		else
			remove_env_entry(&shell->env, key);
		i++;
	}
	return (0);
}
void	remove_env_entry(char ***env, const char *key)
{
	int		i;
	int		j;
	int		len;
	char	**new_env;

	len = count_2d_arr(*env);
	new_env = malloc(sizeof(char *) * len);
	if (!new_env)
		return ;
	i = 0;
	j = 0;
	while ((*env)[i])
	{
		if (!ft_strncmp((*env)[i], key, ft_strlen(key))
			&& (*env)[i][ft_strlen(key)] == '=')
			free((*env)[i]);
		else
			new_env[j++] = (*env)[i];
		i++;
	}
	new_env[j] = NULL;
	free(*env);
	*env = new_env;
}
