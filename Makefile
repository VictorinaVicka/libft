# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 13:36:23 by tfarenga          #+#    #+#              #
#    Updated: 2020/05/15 11:30:52 by tfarenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CLANG = clang

FLAG = -Wall -Wextra -Werror

SRC = ft_strlen.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_strchr.c ft_strlcpy.c ft_strlcat.c ft_memset.c ft_bzero.c ft_memcpy.c \
ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
ft_strmapi.c ft_strtrim.c ft_split.c ft_itoa.c

OBJ = $(SRC:.c=.o)

BONUSSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstiter.c ft_lstclear.c

BONUSOBJ = $(BONUSSRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) libft.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(BONUSOBJ) libft.h
	ar rc $(NAME) $(BONUSOBJ)
	ranlib $(NAME)

%.o	: %.c
	$(CLANG) $(FLAG) -c -o $@ $<

clean:
	rm -rf $(OBJ) $(BONUSOBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

rebonus: fclean bonus