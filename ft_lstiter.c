/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:10:24 by klupin            #+#    #+#             */
/*   Updated: 2021/10/18 01:14:34 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Итерирует список 'lst' и применяет функцию 'f' к содержимому каждого
 *элемента.
 * Эта функция будет принимать функцию f, переданную в параметрах, и
 *применять ее к каждому звену нашего связного списка. Сначала мы проверяем,
 *чтобы наш параметр функции f не был NULL. Если он не NULL, мы начинаем
 *цикл по нашему связанному списку, применяя функцию f к каждому звену.
 *После применения функции мы устанавливаем текущую ссылку в качестве
 *следующего элемента, устанавливаем ее в следующую ссылку, а затем начинаем
 *цикл заново, пока не достигнем конца, нажав NULL.*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
