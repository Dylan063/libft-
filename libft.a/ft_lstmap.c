/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student42nice.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:01:17 by dravaono          #+#    #+#             */
/*   Updated: 2023/04/08 15:40:34 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*first;
	t_list	*second;

	if (!lst)
		return (0);
	first = 0;
	while (lst)
	{
		second = ft_lstnew(f(lst->content));
		if (!(second))
		{
			ft_lstclear(&first, del);
			return (0);
		}
		ft_lstadd_back(&first, second);
		lst = lst->next;
	}
	return (first);
}
