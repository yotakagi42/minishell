/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:43:06 by nhara             #+#    #+#             */
/*   Updated: 2025/06/30 15:21:04 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// int loop(t_shell *shell); //TODO　これ、ここに必要？

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
// シェルの初期化
int	init_shell(t_shell *shell)
{
	shell->cmd = NULL;
	shell->lexer_list = NULL;
	shell->reset = false; // shellのリセットが不要であることを示す
	shell->pid = NULL;
	shell->heredoc = false;
	// shell->stop_heredoc = 0;
	// shell->in_cmd = 0;
	// shell->in_heredoc = 0;
	init_paths_from_env(shell);
	// init_signals(); //TODO
	return (1);
}

// シェル全体のデータ解放＋最初期化＋次のループへ
int	reset_shell(t_shell *shell)
{
	// 各々のコマンドを解放
	free_cmd(&shell->cmd);
	// コマンドを保持していた文字列を解放
	free(shell->args);
	if (shell->pid)
		free(shell->pid);
	// パスリストを解放
	free_arr(shell->paths);
	// shell構造体再設定
	init_shell(shell);
	// 初期化するようにフラグを立てる
	shell->reset = true;
	loop(shell);
	return (1); // リセット完了を伝える
}

int	loop(t_shell *shell)
{
	char	*tmp;

	shell->args = readline("minishell> ");
	tmp = ft_strtrim(shell->args, " ");
	free(shell->args);
	shell->args = tmp;
	if (!shell->args)
	{
		ft_putendl_fd("exit", STDOUT_FILENO);
		exit(EXIT_SUCCESS);
	}
	if (shell->args[0] == '\0')
		return (reset_shell(shell));
	add_history(shell->args);
	if (!validate_quotes(shell->args))
		return (ft_error(2, shell));
	shell->lexer_list = lexer(shell->args);
	if (!shell->lexer_list)
		return (ft_error(1, shell));
	parser(shell);
	executor(shell);
	reset_shell(shell);
	return (1);
}
