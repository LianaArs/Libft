/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:31:35 by klupin            #+#    #+#             */
/*   Updated: 2021/10/25 21:53:00 by liana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Согласно инструкции, эта функция копирует len байт из строки src в строку dst.
 * Две строки могут перекрываться; копирование всегда выполняется неразрушающим
 * образом. Функция возвращает исходное значение параметра dst. Memmove копирует
 * с конца, memcpy с начала массива.*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	if (src >= dst)
		return (ft_memcpy(dst, src, len));
	while (len--)
		d[len] = s[len];
	return (dst);
}
