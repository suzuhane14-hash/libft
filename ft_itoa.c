/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 00:25:59 by omito             #+#    #+#             */
/*   Updated: 2026/05/14 12:04:24 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	n_digit(long nb)
{
	size_t	digit_counter;

	digit_counter = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		digit_counter++;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		digit_counter++;
	}
	return (digit_counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;
	size_t	digit_counter;

	nb = n;
	digit_counter = n_digit(nb);
	i = digit_counter - 1;
	str = malloc(digit_counter + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	str[digit_counter] = '\0';
	return (str);
}

//#include <stdio.h>
//int main(void)
//{
//	int n = 1234567;
//	printf ("%s", ft_itoa(n));
//}	
