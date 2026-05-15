/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:52:07 by omito             #+#    #+#             */
/*   Updated: 2026/04/29 20:33:33 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*buf;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	buf = malloc (i + 1);
	if (buf == NULL)
		return (NULL);
	while (j < i)
	{
		buf[j] = s[j];
		j++;
	}
	buf[j] = '\0';
	return (buf);
}

