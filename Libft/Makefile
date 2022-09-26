# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/23 11:00:54 by jmoyano-           #+#    #+#              #
#    Updated: 2022/05/25 18:46:46 by jmoyano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Este es el Makefile correspondiente a la práctica LIBFT
# José Moyano Jiménez

NAME    =   libft.a

SRCS    =   ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_calloc.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_split.c \
			ft_striteri.c 

		   
OBJS		=	${SRCS:.c=.o}

BONUS	=   ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

BONUS_OBJS	=   ${BONUS:.c=.o}

CFLAGS		= -Wall -Wextra -Werror

$(NAME):
	gcc $(CFLAGS) -c $(SRCS) -I./
	ar rcs $(NAME) $(OBJS)

bonus:
	gcc $(CFLAGS) -c $(SRCS) $(BONUS) -I./
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:     all clean fclean bonus re
