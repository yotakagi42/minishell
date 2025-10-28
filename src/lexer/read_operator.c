/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_operator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:35:34 by yotakagi          #+#    #+#             */
/*   Updated: 2025/05/29 17:15:55 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	read_operator(const char **input, t_lexer **tokens)
{
	t_tokens	type;

	if (**input == '>' && *(*input + 1) == '>')
	{
		type = REDIR_APPEND;
		*input += 2;
	}
	else if (**input == '<' && *(*input + 1) == '<')
	{
		type = HEREDOC;
		*input += 2;
	}
	else if (**input == '>')
	{
		type = REDIR_OUT;
		(*input)++;
	}
	else if (**input == '<')
	{
		type = REDIR_IN;
		(*input)++;
	}
	else if (**input == '|')
	{
		type = PIPE;
		(*input)++;
	}
	else
	{
		lexer_error("unexpected operator");
		return ;
	}
	append_token(tokens, new_token(NULL, type));
}
