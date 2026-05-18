/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:48:21 by omito             #+#    #+#             */
/*   Updated: 2026/05/18 23:09:24 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	d = dest;
	s = src;
	i = 0;
	if (d == NULL && s == NULL)
		return (dest);
	while (i < n)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	return (dest);
}
