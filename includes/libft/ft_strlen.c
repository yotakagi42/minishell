/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:39 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 17:34:00 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// int main (void)
// {
//     char    str[] = "Hello, World!";
//     size_t    len;

//     len = ft_strlen(str);
//     printf("Length of string: %zu\n", len);

//     return (0);
// }
