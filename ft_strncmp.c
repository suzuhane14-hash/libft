/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:21:32 by omito             #+#    #+#             */
/*   Updated: 2026/04/28 18:08:23 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned const char	*t1;
	unsigned const char	*t2;

	i = 0;
	t1 = (const unsigned char *)s1;
	t2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (t1[i] != t2[i] || t1[i] == '\0' || t2[i] == '\0')
			return ((int)t1[i] -(int)t2[i]);
		i++;
	}
	return (0);
}

