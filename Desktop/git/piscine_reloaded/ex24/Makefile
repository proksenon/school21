# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nclaire <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 16:38:25 by nclaire           #+#    #+#              #
#    Updated: 2019/09/08 16:38:53 by nclaire          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/*.c
HEADER_DIR = includes

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) -I$(HEADER_DIR)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
