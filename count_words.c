/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 21:02:34 by omito             #+#    #+#             */
/*   Updated: 2026/05/03 22:45:34 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int count_words(char *s)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
			i++;
		fflush(stdout);
		
		while (s[i] != '\0' && s[i] != ' ' && !(s[i] >= 9 && s[i] <= 13))
		{
			fflush(stdout);
			i++;
		}	
			counter++;
	}
	return (counter);
}	

int main (void)
{
	char *s =" abcdefg shifqj";
	printf("count words=%d", count_words(s));
}	
