/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:31 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 16:33:30 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcpy(result + len1, s2, len2 + 1);
	return (result);
}

// int main(void)
// {
//     char *s1 = "Hello, ";
//     char *s2 = "World!";

//     char *joined = ft_strjoin(s1, s2);

//     if (joined)
//     {
//         printf("Joined string: %s\n", joined);
//         free(joined);
//     }
//     else
//     {
//         printf("String join failed.\n");
//     }

//     return (0);
// }
