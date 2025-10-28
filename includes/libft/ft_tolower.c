/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:35:03 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 19:04:53 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	char	upper;
// 	char	lower;

// 	upper = 'A';
// 	lower = ft_tolower(upper);
// 	printf("%c\n", lower);
// 	return (0);
// }
