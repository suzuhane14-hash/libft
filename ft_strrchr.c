/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:53:42 by omito             #+#    #+#             */
/*   Updated: 2026/05/14 13:24:40 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*tmp;

	tmp = str;
	while (*str != '\0')
		str++;
	while (str >= tmp)
	{
		if (*str == (char)c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}

