/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:25 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 16:54:43 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s1[len] != '\0')
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

// int	main(void)
// {
//     const char	*original = "Hello, World!";
//     char	*copy;

//     copy = ft_strdup(original);
//     if (copy == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return (1);
//     }

//     printf("Original: %s\n", original);
//     printf("Copy: %s\n", copy);

//     free(copy); // コピーしたメモリを解放
//     return (0);
// }
