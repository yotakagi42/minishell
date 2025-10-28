/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 01:10:14 by takagiyoshi       #+#    #+#             */
/*   Updated: 2024/11/10 21:49:16 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int main(void)
// {
//     int     value = 42;
//     t_list  *node;

//     node = ft_lstnew(&value);
//     if (node)
//     {
//         printf("Content: %d\n", *(int *)(node->content));
//         free(node);  // 作成した要素を使用後に解放
//     }
//     return (0);
// }