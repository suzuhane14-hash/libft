/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 23:53:33 by omito             #+#    #+#             */
/*   Updated: 2026/05/14 10:57:59 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	s_len;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	str = malloc(s_len + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

//#include <stdio.h>
//int main(void)
//{
//	char *re;
//	char const *s = "idnqAndwi";
//	
//	re = ft_strmapi(s, f);
//	if (re)
//	{	
//		printf ("%s\n", re);
//		free (re);
//	}	
//}			
