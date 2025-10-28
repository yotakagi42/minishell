/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:13:43 by takagiyoshi       #+#    #+#             */
/*   Updated: 2024/11/10 21:49:13 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*last_node;

// 	node1 = ft_lstnew("first");
// 	node2 = ft_lstnew("second");
// 	node3 = ft_lstnew("third");
// 	node1->next = node2;
// 	node2->next = node3;
// 	last_node = ft_lstlast(node1);
// 	if (last_node)
// 		printf("last element : %s\n", (char *)last_node->content);
// 	return (0);
// }
