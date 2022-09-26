# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 10:11:08 by jmoyano-          #+#    #+#              #
#    Updated: 2022/09/26 19:13:07 by jmoyano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = gcc
CFLAGS = -Werror -Wall -Wextra

SRCS = 
		
OBJS = ${SRCS:.c=.o}

$(NAME): $(OBJS)
	make -C ./Moyano_library
	make -C ./MLX42
	${CC} ${CFLAGS} $(OBJS) -I ./Moyano_library -L ./Moyano_library -l ft -o ${NAME}
	${CC} ${CFLAGS} $(OBJS) -I ./MLX42 -L ./MLX42 -l ft -o ${NAME}

all: $(NAME)

clean:
	make clean -C ./Moyano_library
	make clean -C ./MLX42
	rm -f $(OBJS)

fclean: clean
	make fclean -C ./Moyano_library
	make fclean -C ./MLX42
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re