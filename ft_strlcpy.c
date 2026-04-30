/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:58:04 by omito             #+#    #+#             */
/*   Updated: 2026/04/28 12:50:58 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (n != 0)
	{
		while (i < n -1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

//int main (void)
//{
//	char dest[10];
//	const char src[] = "abcdefg";
//	size_t n = 3;
//	printf ("自作関数の結果、ソース文字列の全長は%zu\n", ft_strlcpy(dest, src, n));
//	printf ("dest = %s\n", dest);
//	printf ("本物の関数の結果、ソース文字列の全長は%zu\n", strlcpy(dest, src, n));
//	printf ("dest = %s\n", dest);
//}			

//strncpyの返り値が特殊なバージョン。基本的にはdestの文字列の長さとコピーするsizeの長さの合計を返す
//unsign intを使う理由...配列のサイズや文字列の長さは負の値をとらないため
//戻り値は実際にコピーした数ではなく、srcの文字列全長
//size_tのprintfの書式指定子は%zu
