/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotakagi <yotakagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:18:57 by yotakagi          #+#    #+#             */
/*   Updated: 2024/11/12 17:57:12 by yotakagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && SIZE_MAX / count < size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	int	*arr;

// 	size_t count = 5;          // 確保する要素の数
// 	size_t size = sizeof(int); // 要素のサイズ
// 	// ft_callocを呼び出してメモリを確保
// 	arr = (int *)ft_calloc(count, size);
// 	if (arr == NULL)
// 	{
// 		printf("メモリの確保に失敗しました。\n");
// 		return (1);
// 	}
// 	// 確保したメモリの内容を確認
// 	printf("メモリの内容: ");
// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("%d ", arr[i]); // すべての要素が0であることを確認
// 	}
// 	printf("\n");
// 	// メモリの開放
// 	free(arr);
// 	return (0);
// }
