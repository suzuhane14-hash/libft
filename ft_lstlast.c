/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 00:28:08 by omito             #+#    #+#             */
/*   Updated: 2026/05/15 01:02:00 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (!lst)
		return (NULL);
	while (current->next != NULL)
		current = current->next;
	return (current);
}

//#include <stdio.h>
//int main(void)
//{
//	t_list	*lst;
//	t_list	*node1;
//	t_list	*node2;
//
//	lst = ft_lstnew("apple");
//	node1 = ft_lstnew("banana");
//	node2 = ft_lstnew("fish");
//	ft_lstadd_front(&lst, node1);
//	ft_lstadd_front(&lst, node2);
//	printf ("%s\n", (char *)ft_lstlast(lst)->content);
//}			
