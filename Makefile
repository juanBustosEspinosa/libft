# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/07 17:32:40 by jbustos-          #+#    #+#              #
#    Updated: 2025/10/27 09:34:18 by jbustos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = 	ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_tolower.c ft_toupper.c ft_strrchr.c ft_strncmp.c  \
			ft_memset.c ft_memchr.c ft_bzero.c ft_memcpy.c ft_memmove.c      \
			ft_strlcpy.c ft_strnstr.c ft_strlcat.c ft_atoi.c ft_strdup.c     \
			ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c	 \
			ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c             \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

CFLAGS = -Wall -Wextra -Werror 
CC = cc

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re