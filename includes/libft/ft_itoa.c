/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:33:50 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 20:11:22 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	long int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		len;
	unsigned int	number;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n < 0)
	{
		number = -n;
		s[0] = '-';
	}
	else
		number = n;
	if (n == 0)
		s[0] = '0';
	s = ft_char(s, number, len - 1);
	return (s);
}

// int	main(void)
// {
// 	int		numbers[] = {42, -42, 0, 2147483647, -2147483648};
// 	char	*str;
// 	int		i;

// 	for (i = 0; i < 5; i++)
// 	{
// 		str = ft_itoa(numbers[i]);
// 		if (str)
// 		{
// 			printf("ft_itoa(%d) = %s\n", numbers[i], str);
// 			free(str);
// 		}
// 		else
// 		{
// 			printf("Memory allocation failed\n");
// 		}
// 	}
// 	return (0);
// }
