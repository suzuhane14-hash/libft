/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:00:39 by omito             #+#    #+#             */
/*   Updated: 2026/05/15 15:22:10 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void  del(void *content)
//{
//      (void) content;
//}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*current;

	if (!lst || !*lst)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
	return ;
}

//int main(void)
//{
//	t_list *lst;
//	t_list *node;
//
//	lst = ft_lstnew("apple");
//	node = ft_lstnew("banana");
//	ft_lstadd_back(&lst, node);
//	ft_lstclear(&lst, del);
//	printf ("size: %d\n", ft_lstsize(lst));
//}	
