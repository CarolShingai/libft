# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 17:34:20 by cshingai          #+#    #+#              #
#    Updated: 2023/10/19 17:53:01 by cshingai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -c

FILES = $(wildcard *.c)

FILES_O = $(FILES:%.c=%.o)

all: ${NAME}

fclean: clean
	rm -f ${NAME}

clean:
	rm -f $(FILES_O)

re: fclean all

${NAME}:
	cc $(FLAGS) $(FILES)
	ar rcs ${NAME} ${FILES_O}

# %o%c:
# 	cc -c $< -o $@ -I includes
