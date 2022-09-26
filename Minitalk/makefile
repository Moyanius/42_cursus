# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 18:43:09 by jmoyano-          #+#    #+#              #
#    Updated: 2022/09/06 19:44:38 by jmoyano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Werror -Wextra -Wall

SRC_SERVER = server.c 
OBJ_SERVER = $(SRC_SERVER:.c=.o)
SRC_CLIENT = client.c 
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)


SERVER = server
CLIENT = client

NAME = server client

all: $(SERVER) $(CLIENT)

$(SERVER): $(OBJ_SERVER)
	make -C ./Moyano_library
	make -C ./Printf
	${CC} ${CFLAGS} $(OBJ_SERVER) -I ./Moyano_library -L ./Moyano_library -lft -o $(SERVER)
	${CC} ${CFLAGS} $(OBJ_SERVER) -I ./Printf -L ./Moyano_library -lft -o $(SERVER) 

$(CLIENT): $(OBJ_CLIENT)
	make -C ./Moyano_library
	make -C ./Printf
	${CC} ${CFLAGS} $(OBJ_CLIENT) -I ./Moyano_library -L ./Moyano_library -lft -o $(CLIENT) 
	${CC} ${CFLAGS} $(OBJ_CLIENT) -I ./Printf -L ./Moyano_library -lft -o $(CLIENT)

clean:
	make clean -C ./Moyano_library
	make clean -C ./Printf

	rm -f $(OBJS)

fclean: clean
	make fclean -C ./Moyano_library
	make fclean -C ./Printf
	rm -f $(NAME)
	
re: fclean all

.PNONY: all clean fclean re