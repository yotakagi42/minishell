/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:39:35 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 18:38:20 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_skip_whitespace_and_sign(const char *str, int *sign)
{
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign = -1;
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	result;

	sign = 1;
	result = 0;
	str = ft_skip_whitespace_and_sign(str, &sign);
	while (*str >= '0' && *str <= '9')
	{
		if (result > (LONG_MAX - (*str - '0')) / 10)
		{
			if (sign == 1)
				return ((int)LONG_MAX);
			return ((int)LONG_MIN);
		}
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}

// int	main(void)
// {
// 	const char	*str = "2147483649";
// 	int			num_standard;
// 	int			num_custom;

// 	num_standard = atoi(str);
// 	printf("標準の atoi: %d\n", num_standard);
// 	num_custom = ft_atoi(str);
// 	printf("カスタムの ft_atoi: %d\n", num_custom);
// 	return (0);
// }
