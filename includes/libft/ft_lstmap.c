/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:52:23 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 16:23:30 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	*increment(void *content)
// {
// 	int	*new_content = malloc(sizeof(int));
// 	if (new_content == NULL)
// 		return (NULL);
// 	*new_content = *(int *)content + 1;
// 	return (new_content);
// }

// void	delete_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*list = ft_lstnew(malloc(sizeof(int)));
// 	t_list	*new_list;

// 	*(int *)(list->content) = 42;
// 	list->next = ft_lstnew(malloc(sizeof(int)));
// 	*(int *)(list->next->content) = 24;

// 	new_list = ft_lstmap(list, increment, delete_content);

// 	// 出力やメモリ解放処理
// 	// 元のリストや新しいリストのメモリを適切に解放する

// 	return (0);
// }
