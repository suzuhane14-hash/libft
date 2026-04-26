/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 11:30:29 by omito             #+#    #+#             */
/*   Updated: 2026/04/26 11:57:28 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

//int main(void)
//{
//	int a;
//	int b;
//
//	a = 10;
//	b = 126;
//	printf ("自作関数の結果は、a=%d, b=%d\n", ft_isprint(a), ft_isprint(b));
//	printf ("本物の結果は、a=%d, b=%d\n", isprint(a), isprint(b));
//}
