/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:33:35 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/01 17:29:35 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	test_chars[] = {'A', 'z', '5', '!', ' ', 'B', '0', '9', 'a', '#',
// 			'Z'};
// 	int		num_tests;
// 	int		i;
// 	int		result;

// 	// テスト対象の文字配列
// 	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
// 	i = 0;
// 	// 各文字のテスト結果を表示
// 	while (i < num_tests)
// 	{
// 		result = ft_isalnum(test_chars[i]);
// 		printf("'%c' is %salphanumeric.\n", test_chars[i],
// 			result ? "" : "not ");
// 		i++;
// 	}
// 	return (0);
// }
