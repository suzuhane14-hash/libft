/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 10:55:38 by omito             #+#    #+#             */
/*   Updated: 2026/04/26 11:21:16 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

//int main(void)
//{
//	int a;
//	int b;
//
//	a = 24;
//	b = 128;
//	printf ("自作関数の結果　a=%d, b=%d\n", ft_isascii(a), ft_isascii(b));
//	printf ("本物の結果　a=%d, b=%d\n", isascii(a), isascii(b));
//}
