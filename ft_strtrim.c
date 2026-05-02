/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 19:05:19 by omito             #+#    #+#             */
/*   Updated: 2026/05/02 09:03:48 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	ft_start_index(char *start, char const *s1)
{
	while (start[i] != s1[i])
		i++;
	return(i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tri_s;
	size_t	s1_len;
	size_t	set_len;
	char	*start;
	char	*gorl;

	s1_len = 0;
	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	start = ft_strnstr(s1, set, s1_len);
	start_index = ft_start_index(start, s1);
	tri_s = ft_substr(s1, start_index, set_len);

}

char    *ft_strtrim(char const *s1, char const *set)
{
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (ft_strncmp(&s1[i], &set[j], 1) != 0)
				break;
			j++;
		}
		i++;
	}


