/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:12:22 by klupin            #+#    #+#             */
/*   Updated: 2021/10/17 16:40:53 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*strchr, strrchr - функции определения местоположения символа в строке.
 *Функция strchr находит первое вхождение символа c (преобразованного в char)
 *в строке, на которую указывает s. Завершающий нулевой символ считается
 *частью строки; поэтому если c - `\0', функции находят завершающий `\0'.
 *Функция strrchr идентична функции strchr, за исключением того, что она
 *находит последнее вхождение символа c. Функции strchr и strrchr
 *возвращают указатель на найденный символ или NULL, если символ
 *не встречается в строке.*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		else
			i--;
	}
	return (NULL);
}