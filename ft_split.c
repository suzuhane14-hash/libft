/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 22:47:02 by omito             #+#    #+#             */
/*   Updated: 2026/05/13 21:34:17 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_words(char const *s, char c)
{
	int	i;
	int	words_counter;

	i = 0;
	words_counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			words_counter++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (words_counter);
}

static size_t	ft_word_len(char const *s, char c, int word_index)
{
	size_t	word_len;

	word_len = 0;
	while (s[word_index] != c && s[word_index] != '\0')
	{
		word_len++;
		word_index++;
	}
	return (word_len);
}

static char	**free_all(char **str, int j)
{
	while (j > 0)
	{
		j--;
		free(str[j]);
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	word_len;
	size_t	word_index;
	size_t	j;

	word_index = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (j < count_words(s, c))
	{
		while (s[word_index] == c)
			word_index++;
		word_len = ft_word_len(s, c, word_index);
		str[j] = ft_substr(s, word_index, word_len);
		if (!str[j])
			return (free_all(str, j));
		j++;
		word_index = word_index + word_len;
	}
	str[j] = NULL;
	return (str);
}

//int main(void)
//{
//	char const *s = "asd fggh jjjm";
//	char c = ' ';
//	char **str;
//	int i;
//
//	i = 0;
//	str = ft_split(s, c);
//	if(!str)
//		return(1);
//	while (str[i] != NULL)
//	{
//		printf("単語[%d]: %s\n", i, str[i]);
//        	free(str[i]);
//        	i++;
//    	}
//   	 free(str);
//   	 return (0);
//}
