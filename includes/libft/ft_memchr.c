/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:33:53 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 18:46:18 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = (const unsigned char *)s;
	unsigned char		target;
	size_t				i;

	if (s == NULL)
		return (NULL);
	target = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == target)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
//     const char	str[] = "Hello, World!";
//     char	*result;

//     result = memchr(str, 'W', sizeof(str));
//     if (result != NULL)
//         printf("Found 'W' at position: %ld\n", result - str);
//     else
//         printf("'W' not found.\n");
//     return (0);
// }
