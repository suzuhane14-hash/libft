/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 00:30:11 by omito             #+#    #+#             */
/*   Updated: 2026/05/14 13:22:23 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	f(unsigned int i, char *c)
//{
//	(void)i;
//	if (*c >= 'a' && *c <= 'z')
//		*c = *c - 32;
//	return ;
//}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

//#include <stdio.h>
//
//int main (void)
//{
//	char s[] = "aduwcuAA";
//
//	ft_striteri(s, f);
//    	printf("Result: %s\n", s);
//    	return (0);
//}
