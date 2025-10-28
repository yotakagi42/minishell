/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takagiyoshiharu <takagiyoshiharu@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:14 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/08 22:37:34 by takagiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}
// int	main(void)
// {
// 	// いくつかのテストケースを出力します
// 	ft_putnbr_fd(12345, 1);
// 	write(1, "\n", 1); // 改行
// 	ft_putnbr_fd(-12345, 1);
// 	write(1, "\n", 1); // 改行
// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);            // 改行
// 	ft_putnbr_fd(-2147483648, 1); // int の最小値
// 	write(1, "\n", 1);            // 改行
// 	ft_putnbr_fd(2147483647, 1);  // int の最大値
// 	write(1, "\n", 1);            // 改行
// 	return (0);
// }
