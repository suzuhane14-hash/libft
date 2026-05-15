/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:11:19 by omito             #+#    #+#             */
/*   Updated: 2026/04/28 21:10:45 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t;
	size_t				i;

	t = s;
	i = 0;
	while (i < n)
	{
		if (t[i] == (unsigned char)c)
			return ((void *)&t[i]);
		i++;
	}
	return (NULL);
}

