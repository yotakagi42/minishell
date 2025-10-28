/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:57:09 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 17:52:27 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	buffer[10] = "aafvfiew";

// 	printf("before ft_bzero: %s\n", buffer);
// 	ft_bzero(buffer, 5);
// 	printf("after ft_bzero: ");
// 	for (int i = 0; i < 10; i++)
// 		printf("%c", buffer[i] ? buffer[i] : '.');
// 	printf("\n");
// 	return (0);
// }
