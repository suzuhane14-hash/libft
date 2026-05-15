/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 19:05:19 by omito             #+#    #+#             */
/*   Updated: 2026/05/13 23:41:01 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_s;
	size_t	s1_len;
	size_t	start;
	size_t	end;
	size_t	len;

	s1_len = 0;
	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = s1_len;
	while (end > start && ft_strchr(set, s1[end -1]))
		end--;
	if (start > end)
		len = 0;
	else
		len = end - start;
	trim_s = ft_substr(s1, start, len);
	if (!trim_s)
		return (NULL);
	return (trim_s);
}

