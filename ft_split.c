/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klupin <klupin@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 22:21:27 by klupin            #+#    #+#             */
/*   Updated: 2021/10/17 22:31:01 by klupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Выделяет массив строк, все из которых заканчиваются на '\0', включая сам
 * массив (NULL), полученный путем разбиения s с использованием символа c
 * в качестве разделителя. По сути делим строки на слова. Возвращает новый
 * массив. Если разделитель опущен, массив будет содержать только один элемент,
 * состоящий из всей строки. Если разделитель является пустой строкой, строка
 * str будет преобразована в массив символов.*/

static size_t	count_words(char const *s, char c)
{
	size_t	word_count;
	int		delim;

	word_count = 0;
	delim = 1;
	while (*s)
	{
		if (*s != c && delim)
		{
			delim = 0;
			word_count++;
		}
		else if (*s == c)
			delim = 1;
		s++;
	}
	return (word_count);
}

static void	make_words(char **words, char const *s, char c, size_t n_words)
{
	char	*ptr_c;

	while (*s && *s == c)
		s++;
	while (n_words--)
	{
		ptr_c = ft_strchr(s, c);
		if (ptr_c != NULL)
		{
			*words = ft_substr(s, 0, ptr_c - s);
			while (*ptr_c && *ptr_c == c)
				ptr_c++;
			s = ptr_c;
		}
		else
			*words = ft_substr(s, 0, ft_strlen(s) + 1);
		words++;
	}
	*words = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	num_words;
	char	**words;

	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	words = malloc(sizeof(char **) * (num_words + 1));
	if (words == NULL)
		return (NULL);
	make_words(words, s, c, num_words);
	return (words);
}
