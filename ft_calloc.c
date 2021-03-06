/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:12:53 by klupin            #+#    #+#             */
/*   Updated: 2021/10/17 18:22:38 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Выделяет байт размера и устанавливает в выделенной памяти нули ('\0').
 *Возвращает указатель на первый байт выделенной памяти. В случае ошибки
 *возвращает указатель NULL и устанавливают errno в ENOMEM.
 *Функция free освобождает распределение, которое было создано с помощью
 *предыдущих функций распределения.Функция free не возвращает значение.*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;

	alloc = (char *)malloc(count * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, count * size);
	return (alloc);
}
