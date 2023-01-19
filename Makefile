# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nreyes-p <nreyes-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 19:45:13 by nreyes-p          #+#    #+#              #
#    Updated: 2023/01/19 20:00:44 by nreyes-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_memmove.c ft_strlen.c
OBJECTS = $(SOURCES:.c=.o)
FLAGS = -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
$(OBJECTS):
	gcc $(FLAGS) -c $(SOURCES)	
clean:
	$(RM) $(OBJECTS)
fclean:
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re