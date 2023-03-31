/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student42nice.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:07:57 by dravaono          #+#    #+#             */
/*   Updated: 2023/03/31 16:19:03 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>

int		ft_isalpha(int c);

int		ft_atoi(const char *str);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_strlen(const char *str);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_isprint(int c);

void	*ft_memset(void *s, int c, size_t n);

int		ft_toupper(int c);

void	ft_bzero(void *s, size_t n);

int		ft_tolower(int c);

void	*ft_memmove(void *dest, const void *src, size_t n);

char	*ft_strchr(const char *s, int c);

void	*ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strrchr(const char *s, int c);

#endif
