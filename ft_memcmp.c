/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:11:59 by omito             #+#    #+#             */
/*   Updated: 2026/04/28 21:43:54 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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

//int main(int argc, char *argv[])
//{
//	if (argc != 4)
//		return (1);
//	printf ("自作関数の結果は%d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
//	printf ("本物の関数の結果は%d\n", memcmp(argv[1], argv[2], atoi(argv[3])));
//	return (0);
//}
