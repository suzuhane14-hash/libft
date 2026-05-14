/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 23:07:16 by omito             #+#    #+#             */
/*   Updated: 2026/05/14 11:56:45 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_s;
	size_t			s1_len;
	size_t			s2_len;

	s1_len = 0;
	s2_len = 0;
	if (!s2 || !s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_s = malloc(s1_len + s2_len + 1);
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s1, s1_len + 1);
	ft_strlcat(new_s, s2, s1_len + s2_len + 1);
	return (new_s);
}

//int main(int argc, char **argv)
//{
//	char	*res;
//	if (argc != 3)
//		return (1);
//	res = ft_strjoin(argv[1], argv[2]);
//	printf("s1 = %s\ns2 = %s\n", argv[1], argv[2]);
//	printf("new_s = %s\n", res);
//	free(res);
//}
