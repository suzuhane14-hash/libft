/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 22:47:02 by omito             #+#    #+#             */
/*   Updated: 2026/05/12 01:14:34 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words_counter;
	
	i = 0;
	words_counter = 0;
	
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != c)
			i++;
		if (s[i] == c)
			words_counter++;
	}
	return (words_counter);
}
//単語の長さを図る関数（word_len)

char	*malloc_words_str(char const *s, char **str, int words_counter)
{
	unsigned int	i;
	size_t	words_str_len;

	words_str_index = 0;
	words_str_counter = 0;
	while(j == words_counter - 1)
	{
		while(s[words_str_index] == c)
			words_str_index++;
		while(s[i] != c)
			words_str_len++;
		words_str_index = words_str_index - 1;
		str[j][k] = ft_substr(char const *s, unsigned int words_str_index,
			       	size_t words_sr_len);
		j++;
	}
	return
}	

char	**ft_split(char const *s, char c)
{
	char	**str;
	int	j;
	int	k;
	
	j = 0;
	str = malloc(sizeof(char *) * count_words(s, c) + 1);
	if (!str)
		return (NULL);
	
	while(s[j] != '\0' && j == [words_counter - 1])
	{	
	        str[j][k] = ft_substr(char const *s, unsigned int words_str_index,                                 size_t words_sr_len);
		j++;
 	}
	return (str);
}

int main(void)
{
	char const *S = "asdfghjk";
	char s = 'g';


