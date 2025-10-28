/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:08:41 by takagiyoshi       #+#    #+#             */
/*   Updated: 2024/11/12 16:27:38 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// int main()
// {
//     t_list *node1 = ft_lstnew("first");
//     t_list *node2 = ft_lstnew("second");
//     t_list *node3 = ft_lstnew("third");

//     node1->next = node2;
//     node2->next = node3;

//     int size = ft_lstsize(node1);
//     printf("List size: %d\n", size);

//     return (0);
// }
