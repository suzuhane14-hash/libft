/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 22:47:02 by omito             #+#    #+#             */
/*   Updated: 2026/05/12 19:04:56 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	words_counter;
	
	i = 0;
	words_counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			words_counter++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	printf("%d\n", words_counter);
	return (words_counter);
}
size_t	ft_word_len(char const *s, char c, int word_index)
{
	size_t	word_len;

	word_len = 0;
	while (s[word_index] != c && s[word_index] != '\0')
	{	
		word_len++;
		word_index++;
	}
	return(word_len);
}	

char	**ft_split(char const *s, char c)
{
	char	**str;
	int	j;
	size_t	word_len;
	int	word_index;
	int	total_words;

	word_index = 0;
	j = 0;
	total_words = count_words(s, c);
	str = malloc(sizeof(char *) * (total_words + 1));
	if (!str)
		return (NULL);
	while(j < total_words)
	{	
		while(s[word_index] == c)
			word_index++;
		word_len = ft_word_len(s, c, word_index);
		str[j] = ft_substr(s, word_index, word_len);
		j++;
		word_index = word_index + word_len;
 	}
	str[j] = NULL;
	return (str);
}

int main(void)
{
	char const *s = "asdfghjk";
	char c = 'g';
	char **str;
	int i;

	i = 0;
	str = ft_split(s, c);
	if(!str)
		return(1);
	while (str[i] != NULL)
	{
		printf("単語[%d]: %s\n", i, str[i]);
        	free(str[i]);
        	i++;
    	}
   	 free(str);
   	 return (0);
}
