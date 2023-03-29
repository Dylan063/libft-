/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student42nice.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:19:07 by dravaono          #+#    #+#             */
/*   Updated: 2023/03/28 16:17:21 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (c >= 'a' && c <= 'z'
	|| c >= 'A' && c <= 'Z');
	
}
/*int	main(void)
{
	printf("%d", ft_isalnum('w'));
	printf("%d", isalnum('w'));
		return(0);
}*/
