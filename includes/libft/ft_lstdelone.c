/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:02:47 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 16:16:07 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// void	del_content(void *content)
// {
// 	free(content); // `content` が malloc で確保された文字列だと仮定
// }

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew(ft_strdup("Hello, World!"));
// 	ft_lstdelone(node, del_content);

// 	return (0);
// }
