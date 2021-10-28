/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:50:38 by klupin            #+#    #+#             */
/*   Updated: 2021/10/25 21:53:34 by liana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Конкатенация - запись символов одной строки после всех символов первой.
 * Функции strlcpy и strlcat копируют и конкатенируют строки с теми же
 * входными параметрами и выходным результатом, что и snprintf. Они разработаны
 * как более безопасная, последовательная и менее подверженная ошибкам
 * замена легко используемых функций strncpy и strncat. Возвращает
 * суммарную длину строк dst и src.*/

/* Функции принимают полный размер буфера назначения и гарантируют
 * завершение NUL, если есть место.  Обратите внимание, что место для NUL
 * должно быть включено в dstsize.*/

/* strlcat добавляет строку src в конец dst. Будет добавлено не более
 * dstsize - strlen(dst) - 1 символов.  Затем она завершается NUL-терминалом,
 * если только dstsize не равен 0 или исходная строка dst не была длиннее
 * dstsize (на практике этого не должно происходить, так как это означает,
 * что либо dstsize неверен, либо dst не является правильной строкой).
 * Если строки src и dst пересекаются, поведение не определено.*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	while (src[i] && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
