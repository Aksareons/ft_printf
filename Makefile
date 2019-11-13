# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: voksenui <voksenui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/12 21:30:50 by voksenui          #+#    #+#              #
#    Updated: 2019/02/17 16:35:23 by voksenui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

FLAGS = -Wall -Werror -Wextra

LIB			=	libft/
LIB_N		=	libft.a

SRC			=	process_diuoxp.c cast_specifics.c ft_printf.c \
			 parse.c process_c.c process_pr.c process_s.c \
			 process_f.c


OBJ			=	$(SRC:.c=.o)

INCLUDE		=	-I includes/
CFLAGS		=	-Wall -Wextra -Werror
C			=	gcc

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIB)
	cp $(LIB)$(LIB_N) $(NAME)
	ar -r $(NAME) $(OBJ)


$(OBJ_D)%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

clean:
	make clean -C $(LIB)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIB)
	rm -f $(NAME)

re: fclean all

