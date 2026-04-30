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

//int main(int argc, char **argv)
//{
//	char *res;
//	if (argc != 2)
//		return (1);
//	res = ft_strdup(argv[1]);
//	if (res != NULL)
//		printf ("自作関数の結果、処理は成功しました！コピーされた文字列は%s\n", res);
//	else
//		printf ("自作関数の結果、処理は失敗しました！\n");
//	free(res);
//	res = strdup(argv[1]);
//	if (res != NULL)
//		printf ("本物の関数の結果、処理は成功しました！コピーされた文字列は%s\n", res);
//	else
//		printf ("自作関数の結果、処理は失敗しました！\n");
//	free(res);
//	return (0);
//}
