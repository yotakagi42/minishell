/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:40:28 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 16:13:57 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list	*list = ft_lstnew("Node1");
// 	list->next = ft_lstnew("Node2");
// 	list->next->next = ft_lstnew("Node3");

// 	ft_lstiter(list, print_content);

// 	ft_lstclear(&list, free);
// 	return (0);
// }
