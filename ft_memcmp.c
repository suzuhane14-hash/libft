/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:11:59 by omito             #+#    #+#             */
/*   Updated: 2026/05/15 19:36:50 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*t1;
	const unsigned char	*t2;
	size_t				i;

	t1 = s1;
	t2 = s2;
	i = 0;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return ((int)t1[i] -(int)t2[i]);
		i++;
	}
	return (0);
}

