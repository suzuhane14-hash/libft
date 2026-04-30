/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:27:31 by omito             #+#    #+#             */
/*   Updated: 2026/04/29 18:12:56 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

static void	ft_bzero(void *s, size_t n)
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total_size = size * nmemb;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

//int main (int argc, char **argv)
//{
//	char *res;
//
//	if (argc != 3)
//		return (1);
//	res = ft_calloc(atoi(argv[1]), atoi(argv[2]));
//	if (res != NULL)
//		printf ("自作関数の結果、メモリーは確保されました！\n");
//	else
//		printf ("自作関数の結果、メモリーは確保されませんでした\n");
//	free (res);
//	res = calloc(atoi(argv[1]), atoi(argv[2]));
//	if (res != NULL)
//		printf ("自作関数の結果、メモリーは確保されました！\n");
//	else
//		printf ("本物の関数の結果、メモリーは確保されませんでした\n");
//	free (res);
//}
