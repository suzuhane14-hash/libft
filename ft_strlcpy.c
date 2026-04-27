/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:58:04 by omito             #+#    #+#             */
/*   Updated: 2026/04/23 20:40:12 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t strlcpy(char *dest, const char *src, size_t n)
{
	size_t     i;
	size_t	src_len;
	
	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}	
	if(n != 0)
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

#include <stdio.h>
int main (void)
{
	char dest[10];
	const char src[] = "abcdefg";
	size_t n = 3;
	printf ("ソース文字列の全長は%zu", strlcpy(dest, src, n));
}			

//strncpyの返り値が特殊なバージョン。基本的にはdestの文字列の長さとコピーするsizeの長さの合計を返す
//unsign intを使う理由...配列のサイズや文字列の長さは負の値をとらないため
//戻り値は実際にコピーした数ではなく、srcの文字列全長
//size_tのprintfの書式指定子は%zu
