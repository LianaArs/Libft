/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:44:03 by klupin            #+#    #+#             */
/*   Updated: 2021/10/17 14:48:11 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Функции strlcpy и strlcat копируют и конкатенируют строки с теми же
 * входными параметрами и выходным результатом, что и snprintf. Они разработаны
 * как более безопасная, последовательная и менее подверженная ошибкам
 * замена легко используемых функций strncpy и strncat.Возвращает
 * длину src.*/

/* Функции принимают полный размер буфера назначения и гарантируют
 * завершение NUL, если есть место.  Обратите внимание, что место для NUL
 * должно быть включено в dstsize.*/

/* strlcpy копирует до dstsize - 1 символов из строки src в dst,
 * NUL-терминируя результат, если dstsize не равен 0.
 * Если строки src и dst пересекаются, поведение не определено.*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && dstsize > i + 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
