/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 19:05:19 by omito             #+#    #+#             */
/*   Updated: 2026/05/12 17:25:42 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_s;
	size_t	s1_len;
	size_t	start_i;
	size_t	end_i;
	size_t	len;
	
	s1_len = 0;
	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	if (s1_len == 0)
		return (ft_substr(s1, 0, 0));
	start_i = 0;
	while (s1[start_i] != '\0' && ft_strchr(set, s1[start_i]))
			start_i++;
	end_i = s1_len - 1;
	while (end_i >= start_i && ft_strchr(set, s1[end_i]))
			end_i--;
	if (start_i > end_i)
		len = 0;
	else
		len = end_i - start_i + 1;
	trim_s = ft_substr(s1, start_i, len);
	if (!trim_s)
		return (NULL);
	return (trim_s);
}

int main (void)
{
	char const *s1 = "asdfgg";
	char const *set = "ag";
	char *s;
	s = ft_strtrim(s1, set);
	printf("s =%s", s);
	free(s);
	return(0);
}	
