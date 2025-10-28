/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:28 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/09 16:55:25 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void    ft_toupper_at_index(unsigned int i, char *c)
// {
//     if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
//         *c = *c - 32;
// }

// int main(void)
// {
//     char str[] = "hello world";
//     ft_striteri(str, ft_toupper_at_index);
//     printf("Result: %s\n", str);
//     return (0);
// }
