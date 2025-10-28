/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:34:11 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 18:59:54 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
		ft_putchar_fd('\n', fd);
	}
}

// #include <fcntl.h>
// #include <unistd.h>

// int	main(void)

// {
//     // 標準出力でテスト
//     ft_putendl_fd("Hello, World!", 1);

//     // ファイルでテスト
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         write(2, "Error opening file\n", 19);
//         return (1);
//     }
//     ft_putendl_fd("Hello, File!", fd);
//     close(fd);

//     return (0);
// }
