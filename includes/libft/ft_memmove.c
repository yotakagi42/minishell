/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:01 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 19:39:48 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memmove_copy(unsigned char *d, const unsigned char *s,
		size_t len, int forward)
{
	size_t	i;

	if (forward)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;

	if (dest == NULL || src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	if (d == s || len == 0)
		return (dest);
	if (d < s)
	{
		return (ft_memmove_copy(d, s, len, 1));
	}
	else
	{
		return (ft_memmove_copy(d, s, len, 0));
	}
	return (dest);
}

// int	main(void)
// {
//     char	str[] = "Hello, World!";

//     // メモリ領域が重複している場合のコピーを確認
//     ft_memmove(str + 7, str, 5);

//     printf("Result after ft_memmove: %s\n", str);

//     return (0);
// }
