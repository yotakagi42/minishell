/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:35:06 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 19:04:55 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

// int	main(void)
// {
// 	char	lower;
// 	char	upper;

// 	lower = 'b';
// 	upper = ft_toupper(lower);
// 	printf("Original: %c, Uppercase: %c\n", lower, upper);
// 	return (0);
// }
