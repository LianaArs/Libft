/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:04:02 by klupin            #+#    #+#             */
/*   Updated: 2021/10/17 17:20:57 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Функция strnstr находит первое вхождение "иголки" строки с нулевым окончанием
 *в "стог сена", где перебирается не более len символов.  Символы, встречающиеся
 *после символа `\0', не ищутся. Поскольку функция strnstr является API,
 *специфичным для FreeBSD, ее следует использовать только в тех случаях,
 *когда переносимость не вызывает опасений. Если needle - пустая строка,
 *возвращается haystack; если needle нигде не встречается в haystack,
 *возвращается NULL; в противном случае возвращается указатель на первый символ
 первого вхождения needle.*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			else
				j++;
		}
		i++;
	}
	return (0);
}