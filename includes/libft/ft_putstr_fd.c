/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takagiyoshiharu <takagiyoshiharu@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:16 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/08 22:37:31 by takagiyoshi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return ;
	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
}

// int	main(void)
// {
// 	// 標準出力に文字列を出力
// 	ft_putstr_fd("Hello, world!", 1);
// 	write(1, "\n", 1); // 改行
// 	// 標準エラー出力に文字列を出力
// 	ft_putstr_fd("An error occurred.", 2);
// 	write(2, "\n", 1); // 改行
// 	// 空文字列
// 	ft_putstr_fd("", 1);
// 	write(1, "\n", 1); // 改行
// 	// NULL ポインタ
// 	ft_putstr_fd(NULL, 1);
// 	write(1, "\n", 1); // 改行
// 	return (0);
// }
