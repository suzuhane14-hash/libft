/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 22:12:38 by omito             #+#    #+#             */
/*   Updated: 2026/05/15 00:27:30 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	i = 0;
	current = lst;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}

//#include <stdio.h>
//int main(void)
//{
//	t_list *lst;
//	t_list *node1;
//	t_list *node2;
//	
//	lst = ft_lstnew("apple");
//	node1 = ft_lstnew("banana");
//	node2 = ft_lstnew("cherry");
//	ft_lstadd_front(&lst, node1);
//	ft_lstadd_front(&lst, node2);
//	printf("%d\n", ft_lstsize(lst));
//}
