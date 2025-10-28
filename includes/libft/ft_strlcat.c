/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:34 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 16:33:27 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (i < dstsize - dlen - 1 && src[i] != '\0')
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

// int main(void)
// {
//     char    dst[20] = "Hello, ";
//     char    src[] = "World!";
//     size_t  result;

//     result = ft_strlcat(dst, src, sizeof(dst));
//     printf("After: %s\n", dst);
//     printf("Length of result: %zu\n", result);

//     return (0);
// }
