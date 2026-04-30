# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omito <omito@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/30 10:10:16 by omito             #+#    #+#              #
#    Updated: 2026/04/30 22:47:27 by omito            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
cc	= cc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_isalpha.c ft_memcpy.c ft_strlcpy.c ft_tolower.c ft_isascii.c ft_memmove.c ft_strlen.c ft_toupper.c ft_atoi.c ft_isdigit.c ft_memset.c ft_strncmp.c ft_bzero.c ft_isprint.c ft_strchr.c ft_strnstr.c ft_calloc.c ft_memchr.c ft_strdup.c ft_strrchr.c ft_isalnum.c ft_memcmp.c ft_strlcat.c ft_substr.c
OBJS	= $(SRCS : .C= .o)

all: $(NAME)
$(NAME): $(OBJS)
	$(cc) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	re -f $(NAME)
re:
	fclean all

.PHONY: all clean fclean re
