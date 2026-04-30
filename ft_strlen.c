/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:03:23 by omito             #+#    #+#             */
/*   Updated: 2026/04/28 12:18:46 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

//int main(void)
//{
//	char test[] = "abcde";
//	printf("自作関数の結果、文字数は%zu\n", ft_strlen(test));
//	printf("本物の関数の結果、文字数は%zu\n", strlen(test));
//	return (0);
//}
