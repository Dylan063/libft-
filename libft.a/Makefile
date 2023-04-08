# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #..
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dravaono <dravaono@student42nice.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 16:27:03 by dravaono          #+#    #+#              #
#    Updated: 2023/03/30 16:28:30 by dravaono         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c ft_putendl_fd.c ft_itoa.c ft_strmapi.c ft_putnbr_fd.c\
		ft_tolower.c ft_toupper.c ft_striteri.c ft_memcmp.c ft_split.c\
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_strlen.c ft_strncmp.c ft_strchr.c ft_memmove.c ft_memchr.c\
		ft_bzero.c ft_memset.c ft_memcpy.c ft_strrchr.c ft_strlcat.c\
		ft_strlcpy.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_strtrim.c\
		ft_substr.c ft_strjoin.c ft_putstr_fd.c ft_putchar_fd.c

SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstiter.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c\

OBJS  = ${SRCS:.c=.o}

OBJSB = ${SRCSB:.c=.o} 

NAME = libft.a

all: ${NAME}

${NAME}: ${OBJS}
	ar crs ${NAME} ${OBJS}

bonus: ${OBJSB}
	ar rcs ${NAME} ${OBJSB}

.c.o:
	gcc -Werror -Wextra -Wall -c $< -o ${<:.c=.o}

clean:
	rm -rf ${OBJS} ${OBJSB}

fclean: clean
	rm -rf ${NAME}

re: 	fclean all

.PHONY: all bonus clean fclean re
