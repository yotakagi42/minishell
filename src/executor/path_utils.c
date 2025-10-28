/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagisa <nagisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:15:54 by nagisa            #+#    #+#             */
/*   Updated: 2025/06/20 16:16:23 by nagisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char *find_path(char **env)
{
    int i;
    i = 0;
    while (env[i])
    {
        if (!ft_strncmp(env[i], "PATH=", 5))
            // PATH=以降を取り出して返す
            return (ft_substr(env[i], 5, ft_strlen(env[i]) - 5));
        i++;
    }
    // NULLを返すとft_splitでセグフォの可能性 TODO ft_splitを確認する
    return (ft_strdup("\0"));
}

// コマンド検索用のディレクトリ一覧を準備
int init_paths_from_env(t_shell *shell)
{
    char *path_from_env;
    int i;
    char *tmp;
    // 環境変数一覧（env）から PATH= の行を探す
    path_from_env = find_path(shell->env);
    shell->paths = ft_split(path_from_env, ':');
    free(path_from_env);
    i = 0;
    while (shell->paths[i])
    {
        // 末尾が / じゃないものだけに / を付けて、後でコマンド名をそのまま結合できるようにする
        if (ft_strncmp(&shell->paths[i][ft_strlen(shell->paths[i]) - 1], "/", 1) != 0)
        {
            tmp = ft_strjoin(shell->paths[i], "/");
            free(shell->paths[i]);
            shell->paths[i] = tmp;
        }
        i++;
    }
    return (EXIT_SUCCESS);
}