# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omito <omito@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/30 10:10:16 by omito             #+#    #+#              #
#    Updated: 2026/05/15 18:48:59 by omito            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_isalpha.c ft_memcpy.c ft_strlcpy.c ft_tolower.c ft_isascii.c ft_memmove.c ft_strlen.c ft_toupper.c ft_atoi.c ft_isdigit.c ft_memset.c ft_strncmp.c ft_bzero.c ft_isprint.c ft_strchr.c ft_strnstr.c ft_calloc.c ft_memchr.c ft_strdup.c ft_strrchr.c ft_isalnum.c ft_memcmp.c ft_strlcat.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: all
.PHONY: all clean fclean re bonus
