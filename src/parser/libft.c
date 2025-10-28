/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhara <nhara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:21:47 by nagisa            #+#    #+#             */
/*   Updated: 2025/06/05 15:25:38 by nhara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned char	*p;

// 	p = (unsigned char *)s;
// 	while (n > 0)
// 	{
// 		*p = 0;
// 		p++;
// 		n--;
// 	}
// }

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	size_t	total_size;
// 	void	*ptr;

// 	total_size = nmemb * size;
// 	if (nmemb != 0 && total_size / nmemb != size)
// 		return (NULL);
// 	ptr = malloc(total_size);
// 	if (!ptr)
// 		return (NULL);
// 	ft_bzero(ptr, total_size);
// 	return (ptr);
// }

// void	ft_putstr_fd(char *s, int fd)
// {
// 	if (!s)
// 		return ;
// 	write(fd, s, ft_strlen(s));
// }

// char	*ft_strdup(const char *s)
// {
// 	size_t i;
// 	char *copy;

// 	i = 0;
// 	copy = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
// 	if (!copy)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		copy[i] = s[i];
// 		i++;
// 	}
// 	copy[i] = 0;
// 	return (copy);
// }