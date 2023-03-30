/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student42nice.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:07:57 by dravaono          #+#    #+#             */
/*   Updated: 2023/03/30 15:47:04 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>

int		ft_isalpha(int c);

int		ft_atoi(char *str);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_strlen(char *str);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		ft_isprint(int c);

void	*ft_memset(void *s, int c, size_t n);

int		ft_toupper(int c);

void	ft_bzero(void *s, size_t n);

#endif
