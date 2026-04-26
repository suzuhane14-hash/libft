/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:54:10 by omito             #+#    #+#             */
/*   Updated: 2026/04/26 09:39:57 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

//int main (void)
//{
//	int a;
//	int b;
//
//	a = 129;
//	b = 49;
//	printf ("自作関数のaの結果は%d,bの結果は%d\n", ft_isdigit(a), ft_isdigit(b));
//	printf ("本物のaの結果は%d,bの結果は%d\n", isdigit(a), isdigit(b));
//}
