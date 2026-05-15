/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:27:07 by omito             #+#    #+#             */
/*   Updated: 2026/05/15 15:56:53 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void  f(void *content)
//{
//	printf ("%s\n", (char *)content);
//}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst)
		return ;
	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
	return ;
}

//int main(void)
//{
//	t_list *lst;
//	t_list *node;
//
//	lst = ft_lstnew("banana");
//	node = ft_lstnew("fish");
//	ft_lstadd_back(&lst, node);
//	ft_lstiter(lst,f);
//}	
