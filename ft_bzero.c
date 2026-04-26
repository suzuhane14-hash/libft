/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:36:56 by omito             #+#    #+#             */
/*   Updated: 2026/04/26 18:46:52 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dst;
	size_t			i;

	i = 0;
	dst = s;
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return ;
}

//int main(void)
//{
//	char str[] = "imagination";
//	size_t a = 5;
//	int i = 0;
//
//	printf ("実行前");
//	while (i < 11)
//	{
//		printf("%d", str[i]);
//		i++;
//	}
//	printf("\n");
//	i = 0;
//
//	ft_bzero (str, a);
//	printf ("自作関数実行後");
//	while (i < 11)
//	{
//		printf("%d", str[i]);
//		i++;
//	}
//	printf("\n");
//
//	i = 0;
//	bzero (str, a);
//	printf ("本物の関数実行後");
//	while (i < 11)
//	{
//		printf("%d", str[i]);
//		i++;
//	}
//	printf("\n");
//	
//	return (0);
//}
