/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:45 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 16:33:19 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == '\0')
				return (0);
		}
		else
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     const char *str1 = "Hello, world!";
//     const char *str2 = "Hello, World!";
//     int result;

//     result = ft_strncmp(str1, str2, 5);
//     printf("First 5 characters comparison result: %d\n", result); 
	// 出力: 0 (最初の5文字は同じ)

//     result = ft_strncmp(str1, str2, 13);
//     printf("First 13 characters comparison result: %d\n", result); 
	// 出力: 正の値 (6文字目で異なる)

//     return (0);
// }
