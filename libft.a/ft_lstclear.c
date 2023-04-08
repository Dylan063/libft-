/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student42nice.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:17:34 by dravaono          #+#    #+#             */
/*   Updated: 2023/04/08 15:36:40 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*secondd;

	if (!lst)
		return ;
	while (*lst)
	{
		secondd = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = secondd;
	}
	*lst = 0;
}
