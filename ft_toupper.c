/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 21:32:05 by omito             #+#    #+#             */
/*   Updated: 2026/04/26 21:49:48 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c -32;
	}
	return (c);
}

//int main(void)
//{
//	int a = 97;
//	int b = 127;
//
//	printf ("処理前はa=%d, b=%d\n", a, b);
//	printf ("自作関数の結果はa=%d, b=%d\n", ft_toupper(a), ft_toupper(b));
//	printf ("自作関数の結果はa=%d, b=%d\n", toupper(a), toupper(b));
//}
