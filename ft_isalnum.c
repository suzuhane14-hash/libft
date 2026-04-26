/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 09:49:32 by omito             #+#    #+#             */
/*   Updated: 2026/04/26 10:54:27 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

//int main(void)
//{
//	int a;
//	int b;
//	int c;
//
//	a = 66;
//	b = 48;
//	c = 3000;
//
//	printf ("自作関数はa=%d, b=%d, c=%d\n",
//	 ft_isalnum(a), ft_isalnum(b), ft_isalnum(c));
//	printf ("本物はa=%d, b=%d, c=%d\n",
//	isalnum(a), isalnum(b), isalnum(c));
//}
