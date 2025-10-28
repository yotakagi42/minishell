/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:37 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 16:52:42 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (dstsize == 0)
		return (i);
	j = 0;
	while (j < dstsize - 1 && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

// int main(void)
// {
//     char src[] = "Hello, World!";
//     char dest[20];

//     size_t len = ft_strlcpy(dest, src, sizeof(dest));

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);
//     printf("Source Length: %zu\n", len);

//     return (0);
// }
