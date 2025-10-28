/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:48 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 17:42:01 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0' && haystack[i + j] == needle[j] && i
				+ j < len)
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	haystack[] = "Hello, World! This is a test string.";
// 	const char	needle[] = "World";
// 	size_t		len;
// 	char		*result;

// 	len = 20;
// 	result = ft_strnstr(haystack, needle, len);
// 	if (result != NULL)
// 		printf("Found: '%s'\n", result);
// 	else
// 		printf("Not found within the given length.\n");
// 	return (0);
// }
