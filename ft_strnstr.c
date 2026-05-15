/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:44:51 by omito             #+#    #+#             */
/*   Updated: 2026/04/28 23:41:36 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const unsigned char	*b;
	const unsigned char	*l;
	size_t				i;
	size_t				j;

	b = (const unsigned char *)big;
	l = (const unsigned char *)little;
	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)b);
	while (b[i] != '\0' && i < len)
	{
		while (i + j < len && b[i + j] == l[j])
		{
			j++;
			if (l[j] == '\0')
				return ((char *)&b[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

