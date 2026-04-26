/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:20:15 by omito             #+#    #+#             */
/*   Updated: 2026/04/26 21:31:10 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	i = n;
	if (d > s)
	{
		while (i > 0)
		{
			d[i -1] = s[i -1];
			i--;
		}
	}
	return (dest);
}

//int main(void)
//{
//	char dest[20];
//	const char str[] = "abcdefg";
//	size_t n = 4;
//
//	printf ("処理前は%s\n", str);
//	ft_memmove(dest, str, n);
//	printf ("自作関数の処理後は%s\n", dest);
//	memmove(dest, str, n);
//	printf ("本物の関数の処理後は%s\n", dest);
//	return (0);
//}
