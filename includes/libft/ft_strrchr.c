/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:50 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 18:14:37 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *str = "Hello, World!";
//     char c = 'o';
//     char *result;

//     result = ft_strrchr(str, c);

//     if (result)
//         printf("The last occurrence of '%c' in \"%s\" is at position: %ld\n",
// c, str, result - str);
//     else
//         printf("The character '%c' was not found in \"%s\".\n", c, str);

//     return (0);
// }
