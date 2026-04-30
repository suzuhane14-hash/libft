/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:53:42 by omito             #+#    #+#             */
/*   Updated: 2026/04/28 14:20:39 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*tmp;

	tmp = str;
	while (*str != '\0')
		str++;
	while (str >= tmp)
	{
		if (*str == c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}

//int main (int argc, char *argv[])
//{
//	char *res;
//	if (argc != 3)
//		return (1);
//	res = ft_strrchr(argv[1], argv[2][0]);
//	if (res != NULL)
//		printf ("自作関数が処理した結果、文字は見つかりました\n");
//	else
//		printf ("自作関数が処理した結果、文字は見つかりませんでした\n");
//	res = strrchr(argv[1], argv[2][0]);
//	if (res != NULL)
//		printf ("本物の関数関数が処理した結果、文字は見つかりました\n");
//	else
//		printf ("本物の関数が処理した結果、文字は見つかりませんでした\n");
//}
