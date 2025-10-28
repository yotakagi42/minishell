/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_quotes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:14:02 by nhara             #+#    #+#             */
/*   Updated: 2025/06/08 15:03:23 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// num_quotesはポインタにすることによって呼び出し元の変数に変更を反映
int	find_pair_quote(char *args, int i, int *num_quotes, int quote)
{
	int	j;

	//開きクオートの次の文字から
	j = i + 1;
	//開きクオートをカウント
	*num_quotes += 1;
	while (args[j] && args[j] != quote)
		j++;
	if (args[j] == quote)
		*num_quotes += 1;
	//閉じクオートまで何文字進んだか返す
	return (j - i);
}

int	validate_quotes(char *args)
{
	int	i;
	int	d_quotes;
	int	s_quotes;

	i = -1;
	d_quotes = 0;
	s_quotes = 0;
	while (args[++i])
	{
		if (args[i] == '"')
			//クオートの中をスキップ
			i += find_pair_quote(args, i, &d_quotes, '"');
		if (args[i] == '\'')
			i += find_pair_quote(args, i, &s_quotes, '\'');
	}
	// find_pair_quoteの内部でdとsは変更される
	if ((s_quotes % 2 != 0) || (d_quotes % 2 != 0))
		return (0);
	return (1);
}
