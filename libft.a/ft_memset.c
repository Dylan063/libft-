/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student42nice.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:22:34 by dravaono          #+#    #+#             */
/*   Updated: 2023/03/28 16:25:45 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, site_t n)
{
	site_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = c;
		i++;
	}
	return (s);
}
