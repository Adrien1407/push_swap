# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/17 15:30:32 by adrienlan         #+#    #+#              #
#    Updated: 2021/05/17 15:56:02 by adrienlan        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= pushswap.a
SRCS		= $(addprefix ./srcs/, ${SRCS_FILES})
SRCS_FILES	= \
			  utils/free_everything.c \
			  utils/print_error_and_exit.c \
			  operators/sa_sb_ss.c \
			  operators/pa_pb.c \
			  operators/ra_rb_rr.c \
			  operators/rra_rrb_rrr.c \
			  ps_delete_first.c \
			  ps_prepend.c \
			  ps_atoi.c \
			  ps_fill_tab_a.c \


OBJS		= ${SRCS:.c=.o}
%.o: %.c
	gcc -Wall -Werror -Wextra -I ./includes -o $@ -c $<

all:		${NAME}

${NAME}:	${OBJS}
	ar -rcs ${NAME} ${OBJS}
	@gcc -o push_swap -fsanitize=address -Wall -Werror -Wextra main.c \
	pushswap.a -I ./includes
	 
clean:
	rm -f ${OBJS}
	rm -f push_swap

fclean:		clean
	rm -f ./${NAME}

re:			fclean all

.PHONY: 		all fclean clean re


