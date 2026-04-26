/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 21:51:54 by omito             #+#    #+#             */
/*   Updated: 2026/04/26 22:03:51 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c +32;
	}
	return (c);
}

//int main (void)
//{
//	int a = 65;
//	int b = 224;
//
//	printf ("処理前はa=%d, b=%d\n", a, b);
//	printf ("自作関数の結果はa=%d, b=%d\n", ft_tolower(a), ft_tolower(b));
//  	printf ("自作関数の結果はa=%d, b=%d\n", tolower(a), tolower(b));
//}
