/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omito <omito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 12:46:32 by omito             #+#    #+#             */
/*   Updated: 2026/05/15 13:59:29 by omito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	del(void *content)
//{
//	(void) content;
//}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
	return ;
}

//int main(void)
//{
//	t_list *lst;
//
//	lst = ft_lstnew("apple");
//	ft_lstdelone(lst, del);
//	printf ("done\n");
//}	
