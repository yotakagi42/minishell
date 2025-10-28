/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:33:43 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/01 18:29:20 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	test_chars[] = {'0', '5', '9', 'a', 'Z', '!', ' ', '1', '8', '#'};
// 	int		num_tests;
// 	int		i;
// 	int		result;

// 	// テスト対象の文字配列
// 	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
// 	i = 0;
// 	// 各文字のテスト結果を表示
// 	while (i < num_tests)
// 	{
// 		result = ft_isdigit(test_chars[i]);
// 		printf("'%c' is %sa digit.\n", test_chars[i], result ? "" : "not ");
// 		i++;
// 	}
// 	return (0);
// }
