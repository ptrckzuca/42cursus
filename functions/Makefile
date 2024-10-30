# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnovato- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 14:57:03 by pnovato-          #+#    #+#              #
#    Updated: 2024/10/30 16:00:09 by pnovato-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
REMOVE = rm -f

SRCS = ft_atoi.c \
ft_isascii.c \
ft_memcpy.c \
ft_strlcat.c \
ft_tolower.c \
ft_bzero.c \
ft_isdigit.c \
ft_memmove.c \
ft_strlen.c \
ft_toupper.c \
ft_calloc.c \
ft_isprint.c \
ft_memset.c \
ft_strncmp.c \
ft_isalnum.c \
ft_memchr.c \
ft_strchr.c \
ft_strnstr.c \
ft_isalpha.c \
ft_memcmp.c \
ft_strdup.c \
ft_strrchr.c \
ft_strlcpy.c
 
OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all 

.PHONY: all clean fclean re


