/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 21:56:55 by omito             #+#    #+#             */
/*   Updated: 2026/04/27 20:23:04 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dst_len)
		return (size + src_len);
	while (i < size - dst_len - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

//int main (void)
//{
//	char dst[] = "abcdef";	
//	const char src[] = "ghijkl";	
//	size_t size = 8;
//
//	printf ("処理前のdstの文字列は、%s\n", dst);
//	ft_strlcat(dst, src, size);
//	printf ("自作関数の結合後の文字列は、%s\n", dst);	
//	printf ("自作関数の結合前のdstの長さ ＋ srcの長さは%zu\n", strlcat(dst, src, size));
//	strlcat(dst, src, size);
//	printf ("本物の関数の結合後の文字列は、%s\n", dst);	
//	printf ("本物の関数の結合前のdstの長さ ＋ srcの長さは%zu\n", strlcat(dst, src, size));
//	return (0);
//}	

//strlcat はC言語で文字列を安全に結合するための関数	
//戻り値は結合しようと試みた全文字列の長さ（結合前のdestの長さ ＋ srcの長さ）
//strlcat の引数にわざわざ size（バッファの全容量）を渡しているのは、
//**「たとえ \0 が見つからなくても、この size を超えたら探索を止めてね」**と関数に約束させるため
