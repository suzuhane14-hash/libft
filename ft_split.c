/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 22:47:02 by omito             #+#    #+#             */
/*   Updated: 2026/05/04 15:49:40 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	int	i;
	int	counter;
	char	**str;
	int	j;
	
	i = 0;
	j = 0;
	counter = 0;
	
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != c)
		{	i++;
			char_counter++;	
		}	
		words_counter++;
		str[j] = malloc(char_counter + 1);
		
		if (!str[j])
			return (NULL);
		j++;
	}
	return (
}

int main(void)
{
	char const *S = "asdfghjk";
	char s = 'g';


