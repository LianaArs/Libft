/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 00:23:12 by klupin            #+#    #+#             */
/*   Updated: 2021/10/14 21:57:38 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Согласно руководству, эта функция копирует n байт из области памяти src в
 * область памяти dst. Если dst и src пересекаются, поведение не определено.
 * Приложения, в которых dst и src могут пересекаться, должны использовать
 * ft_memmove. Эта функция возвращает исходное значение dst.*/

/*Начнем с создания трех переменных. Первая будет нашим счетчиком, который
 * мы будем использовать для выполнения цикла и перемещения по позициям индекса
 * каждой заданной строки. Поскольку мы будем выполнять цикл только до тех пор,
 * пока мы меньше заданного размера n, мы хотим убедиться, что наша переменная
 * счетчика также имеет размер n, чтобы мы могли сравнивать ее с n. Далее мы
 * создадим две переменные-указателя char. Мы установим наш счетчик в 0 и
 * преобразуем наши заданные строки параметров в char-указатели и поместим их
 * внутри наших переменных d и s char pointer. Затем мы начинаем наш цикл.*/

/*Пока наш счетчик i меньше заданного size_t n, мы хотим, чтобы наш цикл
 * продолжался, поскольку мы копируем n байт из области памяти src в область
 * памяти dst. Внутри нашего цикла мы помещаем индексную позицию i из s
 * (которая в данный момент содержит src) в индексную позицию i из d
 * (которая в данный момент содержит область памяти dst). Мы увеличиваем наш
 * i и продолжаем цикл до тех пор, пока i не станет меньше n.
 * Затем мы возвращаем dst.*/

void	*ft_memcpy(void *dst, const void	*src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
