/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:33:47 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/01 18:36:05 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	test_chars[] = {'A', 'z', '5', '!', ' ', '\n', '\t', 127, '0', '~'};
// 	int		num_tests;
// 	int		i;
// 	int		result;

// 	// テスト対象の文字数を計算
// 	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
// 	i = 0;
// 	// 各文字のテスト結果を表示
// 	while (i < num_tests)
// 	{
// 		result = ft_isprint(test_chars[i]);
// 		printf("'%c' (ASCII %d) is %sprintable.\n", test_chars[i],
// 			test_chars[i], result ? "" : "not ");
// 		i++;
// 	}
// 	return (0);
// }
