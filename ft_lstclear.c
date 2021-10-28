/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:07:13 by klupin            #+#    #+#             */
/*   Updated: 2021/10/28 19:20:22 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Удаляет и освобождает заданный элемент и каждого преемника этого элемента,
 *используя функции 'del' и free.*/

void	ft_lstclear(t_list **lst, void (*del)(void *))

{
	t_list	*current;
	t_list	*next_lst;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		current = *lst;
		next_lst = current->next;
		ft_lstdelone(current, del);
		*lst = next_lst;
	}
}
