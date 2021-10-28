/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 00:44:49 by klupin            #+#    #+#             */
/*   Updated: 2021/10/18 00:54:49 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*В этой функции мы будем добавлять новую ссылку с именем 'new', которое
 *передается в наших параметрах, в список и помещать эту ссылку в начало
 *нашего списка. Сначала мы проверяем, чтобы ссылка new, переданная в
 *параметрах, была NULL. Если это не так, мы устанавливаем элемент нашей
 *ссылки new рядом с первой ссылкой, на которую указывает lst в наших
 *параметрах. Затем мы устанавливаем указатель lst на new, тем самым
 *устанавливая его в начало нашего связанного списка.*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
		new->next = *lst;
	*lst = new;
}
