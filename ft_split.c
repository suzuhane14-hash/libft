/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 22:47:02 by omito             #+#    #+#             */
/*   Updated: 2026/05/03 23:06:51 by omito            ###   ########.fr       */
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
			i++;
		counter++;
		str[j] = malloc(counter + 1);

			
