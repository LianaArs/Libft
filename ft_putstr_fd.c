/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 00:15:53 by klupin            #+#    #+#             */
/*   Updated: 2021/10/28 15:50:43 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Эта функция точно такая же, как и наша функция ft_putstr, за исключением
 *того, что в качестве параметра нам требуется дескриптор файла, а также 
 *желаемая строка для записи. Как и в функции ft_putchar_fd, мы используем
 *дескриптор файла, полученный из системного вызова open, или можем
 *использовать 0, 1 или 2, чтобы сослаться на стандартный ввод, стандартный
 *вывод или стандартную ошибку. Мы используем параметр fd в качестве первого
 *параметра в нашей функции записи. Затем мы помещаем нашу строку в качестве
 *следующего параметра функции write. В последнюю очередь мы используем
 *ft_strlen для нашей строки, чтобы знать, сколько байт нужно записать,
 *что равно длине данной строки. После этого функция write запишет строку 
 *s на нужный выход.*/

void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
