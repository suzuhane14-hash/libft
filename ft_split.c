/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 22:47:02 by omito             #+#    #+#             */
/*   Updated: 2026/05/11 10:50:37 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
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
		words_counter++;
	}
	return (words_counter);
}

int	count_words_str(char const *s)
{
	int	i;
	int	words_str_counter;

	i = 0;
	words_str_counter = 0;
	//count_wordsのiの値が欲しい


char	**ft_split(char const *s, char c)
{
	char	**str;
	int	j;
	int	k;
	
	j = 0;
	str[j] = malloc(words_counter + 1);
	if (!str[j])
		return (NULL);
	}
	str[j][k] 
	return (
}

int main(void)
{
	char const *S = "asdfghjk";
	char s = 'g';


