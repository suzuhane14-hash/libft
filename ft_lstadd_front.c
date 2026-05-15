/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 20:22:57 by omito             #+#    #+#             */
/*   Updated: 2026/05/14 22:12:01 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

//int main(void)
//{
//	t_list *lst = ft_lstnew("apple");
//	t_list *new = ft_lstnew("new");
//
//	ft_lstadd_front(&lst, new);
//
//	printf("%s\n", (char *)lst->content);
//	printf("%s\n", (char *)lst->next->content);
//	free(lst->next);
//	free(lst);
//}	
