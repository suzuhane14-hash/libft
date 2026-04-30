/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:44:51 by omito             #+#    #+#             */
/*   Updated: 2026/04/28 23:41:36 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const unsigned char	*b;
	const unsigned char	*l;
	size_t				i;
	size_t				j;

	b = (const unsigned char *)big;
	l = (const unsigned char *)little;
	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)b);
	while (b[i] != '\0' && i < len)
	{
		while (i + j < len && b[i + j] == l[j])
		{
			j++;
			if (l[j] == '\0')
				return ((char *)&b[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

//int main (int argc, char *argv[])
//{
//	char *res;
//
//	if (argc != 4)
//		return (1);
//	res = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
//	if (res != NULL)
//		printf ("自作関数の結果、検索文字は見つかりました\n");
//	else
//		printf ("自作関数の結果、検索文字は見つかりませんでした\n");
//	res = strnstr(argv[1], argv[2], atoi(argv[3]));
//	if (res != NULL)
//		printf ("本物の関数の結果、検索文字は見つかりました\n");
//	else
//		printf ("本物の関数の結果、検索文字は見つかりませんでした\n");
//}
