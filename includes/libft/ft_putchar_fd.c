/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:08 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/07 16:59:20 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>  // open関数用
// #include <unistd.h> // close関数用

// int	main(void)
// {
//     int	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         return (1); // ファイルが開けなかった場合、エラー終了
//     }
//     ft_putchar_fd('A', fd);   // ファイルに 'A' を書き込み
//     ft_putchar_fd('\n', 1);   // 標準出力に改行を出力
//     ft_putchar_fd('B', 2);    // 標準エラーに 'B' を出力

//     close(fd); // ファイルを閉じる
//     return (0);
// }
