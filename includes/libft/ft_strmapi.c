/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:42 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 18:45:35 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// char	to_upper_even(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (c - 32); // 小文字を大文字に
// 	return (c);
// }

// int	main(void)
// {
// 	char	original[] = "abcdef";
// 	char	*modified;

// 	modified = ft_strmapi(original, to_upper_even);
// 	if (modified)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Modified: %s\n", modified);
// 		free(modified);
// 	}
// 	return (0);
// }
