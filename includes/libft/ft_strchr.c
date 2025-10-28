/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:22 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 18:12:32 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
//     const char *str = "Hello, World!";
//     char ch;
//     char *result;

//     // テストケース1: 文字が文字列に存在する場合
//     ch = 'W';
//     result = ft_strchr(str, ch);
//     if (result)
//         printf("文字 '%c' は位置 %ld に見つかりました。\n", ch, result - str);
//     else
//         printf("文字 '%c' は見つかりませんでした。\n", ch);

//     // テストケース2: 文字が文字列に存在しない場合
//     ch = 'z';
//     result = ft_strchr(str, ch);
//     if (result)
//         printf("文字 '%c' は位置 %ld に見つかりました。\n", ch, result - str);
//     else
//         printf("文字 '%c' は見つかりませんでした。\n", ch);

//     // テストケース3: ヌル終端文字の検索
//     ch = '\0';
//     result = ft_strchr(str, ch);
//     if (result)
//         printf("ヌル終端文字は位置 %ld に見つかりました。\n", result - str);
//     else
//         printf("ヌル終端文字は見つかりませんでした。\n");

//     return (0);
// }
