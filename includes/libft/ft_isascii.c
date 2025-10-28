/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:33:41 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/01 17:59:26 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int	test_codes[] = {65, 128, 0, 127, -1, 255, 'A', 'z', '5', '!'};
// 	int	num_tests;
// 	int	i;
// 	int	result;

// 	// テスト対象の文字コード配列
// 	// 配列の要素数を計算
// 	num_tests = sizeof(test_codes) / sizeof(test_codes[0]);
// 	i = 0;
// 	// 各コードのテスト結果を表示
// 	while (i < num_tests)
// 	{
// 		result = ft_isascii(test_codes[i]);
// 		printf("Code %d is %sASCII.\n", test_codes[i], result ? "" : "not ");
// 		i++;
// 	}
// 	return (0);
// }
