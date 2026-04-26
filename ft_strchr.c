/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 22:38:30 by omito             #+#    #+#             */
/*   Updated: 2026/04/26 23:56:29 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

//int main(int argc, char *argv[])
//{
//	char *res;
//	if (argc != 3)
//		return (1); 
//	res = ft_strchr(argv[1], argv[2][0]);
//	if (res != NULL)
//		printf ("自作関数が処理した結果、文字は見つかりました\n");
//	else
//		printf ("自作関数が処理した結果、文字は見つかりませんでした\n");
//	res = strchr(argv[1], argv[2][0]);
//	if (res != NULL)
//		printf ("本物の関数が処理した結果、文字は見つかりました\n");
//	else
//		printf ("本物の関数が処理した結果、文字は見つかりませんでした\n");
//	return (0);
//}
