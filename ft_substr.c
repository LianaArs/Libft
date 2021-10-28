/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:18:58 by klupin            #+#    #+#             */
/*   Updated: 2021/10/28 15:54:58 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Выделяет память и копирует подстроку,заканчивающуюся на NULL, заданной строки,
 *начиная от stаrt и будет иметь длину, равную len. Если start и len
 *не обозначают часть допустимой строки, поведение не определено.
 *Если распределение памяти не удалось, функция возвращает NULL.*/

/*Мы начинаем с объявления двух переменных. Первая, i, будет нашим счетчиком
 *и является беззнаковым значением int, чтобы компенсировать возможность того,
 *что строка будет длиннее, чем int сможет сосчитать. Мы также объявляем
 *char-указатель str, который будет содержать нашу свежую строку, которую
 *мы будем возвращать.
 *Мы установили счетчик на 0, потому что будем сравнивать его с len в условии
 *цикла и предполагаем, что len будет по крайней мере 1. Затем мы выделяем
 *память для нашей будущей строки с помощью malloc. Обратите внимание: мы
 *используем переменную len для определения размера выделяемой памяти
 *и добавляем к ней 1, чтобы создать пространство для завершения нашей
 *новой строки словами '\0', потому что malloc берет буквальный интервал,
 *а строки начинаются с позиции 0. Затем мы проверяем, что выделение памяти
 *сработало. Если это не удалось, мы возвращаем NULL. Если нет, мы продолжаем
 *наш цикл.
 *Мы начинаем цикл, задавая условие, что цикл будет длиться до тех пор,
 *пока наш счетчик i будет меньше заданного параметра len. Пока это так,
 *мы будем брать строку параметров, начиная с позиции индекса, заданного
 *параметром start, и добавлять к ней текущее значение нашего счетчика i,
 *чтобы двигаться вдоль строки параметров и помещать соответствующий символ
 *в новую строку. ПРИМЕЧАНИЕ: Используя i для перемещения по строке параметров,
 *мы можем начать с позиции 0 в нашей новой строке и поместить символ с нужным
 *нам начальным индексом строки s в отведенное место нашей новой строки. После
 *завершения цикла мы добавим в новую строку завершающий символ '\0' и
 *вернем ее обратно.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*new_str;
	size_t	s_len;
	size_t	i;

	if (s == NULL)
		return (0);
	s_len = ft_strlen(s);
	if (s == NULL || s_len < start)
		return (ft_strdup(""));
	if (start + len < s_len)
		substr = (char *)malloc((len + 1) * sizeof(char));
	else
		substr = (char *)malloc((s_len - start + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = start;
	new_str = substr;
	while (i < (start + len) && *(s + i))
		*new_str++ = *(s + i++);
	*new_str = '\0';
	return (substr);
}