/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 23:59:15 by klupin            #+#    #+#             */
/*   Updated: 2021/10/28 15:56:04 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Эта функция применяет заданную функцию f к каждому символу заданной строки,
 *чтобы создать новую строку, которая является результатом выполнения функции
 *f на строке s. Она возвращает "свежую" копию измененной строки.Эта функция
 *точно такая же, как ft_strmap, за исключением того, что когда мы запускаем
 *заданную функцию f на символе, мы также передаем в f конкретный индекс
 *нашего символа в заданной строке. 
 *Мы начнем с создания двух переменных. Счетчик unsigned int для перемещения
 *по нашей строке и переменную char для возвращаемой строки.
 *Затем мы выделяем память, необходимую для создания копии измененной строки,
 *которую мы хотим вернуть. Мы используем нашу функцию ft_strlen для данной
 *строки и обязательно добавляем к ней 1, чтобы компенсировать завершающее
 *'\0'. Если выделение не удалось, мы возвращаем NULL. В противном случае мы
 *продолжаем.
 *Теперь мы перебираем нашу строку s и применяем функцию f к каждому из ее
 *символов. Результат этого мы помещаем в соответствующую позицию в нашей
 *пустой строке. Когда мы достигнем конца нашей строки с параметрами, мы выйдем
 *из цикла и обязательно добавим завершающее '\0' в конец нашей новой
 *заполненной строки. Затем мы возвращаем нашу новую строку.*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
