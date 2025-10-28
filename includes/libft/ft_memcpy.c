/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:33:59 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 20:19:57 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	if (!dst || !src)
		return (NULL);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	i = 0;
	while (i < len)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
//     char	src[] = "Hello, World!";
//     char	dest[sizeof(src)];

//     ft_memcpy(dest, src, sizeof(src));

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     // 正しくコピーできたか確認
//     if (memcmp(src, dest, sizeof(src)) == 0)
//         printf("Copy successful!\n");
//     else
//         printf("Copy failed.\n");

//     return (0);
// }
