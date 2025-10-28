/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:33:56 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 19:40:47 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
//     const char	str1[] = "Hello, World!";
//     const char	str2[] = "Hello, world!";

//     int result = memcmp(str1, str2, sizeof(str1));
//     if (result < 0)
//         printf("str1 is less than str2\n");
//     else if (result > 0)
//         printf("str1 is greater than str2\n");
//     else
//         printf("str1 is equal to str2\n");

//     return (0);
// }
