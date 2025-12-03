/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:30:54 by nagisa            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/12/03 12:53:39 by yotakagi         ###   ########.fr       */
=======
/*   Updated: 2025/12/03 02:33:07 by ayamamot         ###   ########.fr       */
>>>>>>> 84c84ff03769db3e3c1e29b83a42a80bdbb1deab
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// 今後の他のエラーもここで対応
<<<<<<< HEAD
// reset_shell消すかも
int	ft_error(int error, t_shell *shell)
=======
int ft_error(int error)
>>>>>>> 84c84ff03769db3e3c1e29b83a42a80bdbb1deab
{
	ft_putstr_fd("minishell: ", STDERR_FILENO);
	if (error == 0)
		ft_putstr_fd("syntax error near unexpected token `newline'\n",
			STDERR_FILENO);
	else if (error == 1)
		ft_putstr_fd("memory error: unable to assign memory\n", STDERR_FILENO);
	else if (error == 2)
		ft_putstr_fd("syntax error: unable to locate closing quotation\n",
			STDERR_FILENO);
	else if (error == 3)
		ft_putstr_fd("Failed to fork\n", STDERR_FILENO);
	return (EXIT_FAILURE);
}

<<<<<<< HEAD
void	parser_error(int error, t_shell *shell, t_lexer *lexer_list)
=======
void parser_error(int error, t_lexer *lexer_list)
>>>>>>> 84c84ff03769db3e3c1e29b83a42a80bdbb1deab
{
	free_lexer(&lexer_list);
	ft_error(error);
}

<<<<<<< HEAD
int	parser_double_token_error(t_shell *shell, t_lexer *lexer_list,
		t_tokens token)
=======
int parser_double_token_error(t_lexer *lexer_list, t_tokens token)
>>>>>>> 84c84ff03769db3e3c1e29b83a42a80bdbb1deab
{
	// ft_putstr_fd("yeah!\n", STDERR_FILENO);
	ft_putstr_fd("minishell: syntax error near unexpected token ",
		STDERR_FILENO);
	if (token == PIPE)
		ft_putstr_fd("`|'\n", STDERR_FILENO);
	else if (token == REDIR_OUT)
		ft_putstr_fd("`>'\n", STDERR_FILENO);
	else if (token == REDIR_APPEND)
		ft_putstr_fd("`>>'\n", STDERR_FILENO);
	else if (token == REDIR_IN)
		ft_putstr_fd("`<'\n", STDERR_FILENO);
	else if (token == HEREDOC)
		ft_putstr_fd("`<<'\n", STDERR_FILENO);
	free_lexer(&lexer_list);
	return (EXIT_FAILURE);
}

int	pipe_errors(t_shell *shell, t_tokens token)
{
	// エラー：連続パイプ
	if (token == PIPE)
	{
<<<<<<< HEAD
		parser_double_token_error(shell, shell->lexer_list,
			shell->lexer_list->token);
=======
		parser_double_token_error(shell->lexer_list, shell->lexer_list->token);
>>>>>>> 84c84ff03769db3e3c1e29b83a42a80bdbb1deab
		return (EXIT_FAILURE);
	}
	// トークンリストが存在しない時
	if (!shell->lexer_list || shell->lexer_list->token == END_OF_INPUT)
	{
		parser_error(0, shell->lexer_list);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
