/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:20:15 by omito             #+#    #+#             */
/*   Updated: 2026/05/18 23:37:49 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	if (d == NULL && s == NULL)
		return (dest);
	if (d < s)
		dest = ft_memcpy(d, s, n);
	i = n;
	if (d > s)
	{
		while (i > 0)
		{
			d[i -1] = s[i -1];
			i--;
		}
	}
	return (dest);
}
