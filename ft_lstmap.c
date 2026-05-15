/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:58:45 by omito             #+#    #+#             */
/*   Updated: 2026/05/15 17:03:52 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void *f(void *content)
//{
//	return (content);
//}
//
//void del(void *content)
//{
//	(void)content;
//}	
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*current;
	t_list	*new_node;
	void	*new_content;

	if (!lst)
		return (NULL);
	lst2 = NULL;
	current = lst;
	while (current != NULL)
	{
		new_content = f(current->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, new_node);
		current = current->next;
	}
	return (lst2);
}

//int main(void)
//{
//	t_list	*lst;
//	t_list	*lst2;
//	t_list	*node;
//
//	lst = ft_lstnew("banana");
//	node = ft_lstnew("fash");
//	ft_lstadd_back(&lst, node);
//	lst2 = ft_lstmap(lst, f, del);
//	printf ("%s\n", (char *)lst2->content);
//	printf ("%s\n", (char *)lst2->next->content);
//}	
