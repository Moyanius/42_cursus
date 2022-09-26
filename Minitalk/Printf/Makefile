# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 19:37:54 by jmoyano-          #+#    #+#              #
#    Updated: 2022/09/05 18:10:18 by jmoyano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Este es el Makefile correspondiente a la práctica PRINTF
# José Moyano Jiménez

NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_printf_utils.c

OBJS		=	${SRCS:.c=.o}

CFLAGS		= -Wall -Wextra -Werror

$(NAME):
	make -C ./Libftt
	cp Libftt/libftt.a $(NAME)
	gcc $(CFLAGS) -c $(SRCS) -I./
	ar rcs $(NAME) $(OBJS)

	
all: $(NAME)

clean:
	make clean -C ./Libftt
	rm -f $(OBJS)

fclean: clean
	make fclean -C ./Libftt
	rm -f $(NAME)

re: fclean all

.PHONY:     all clean fclean re
