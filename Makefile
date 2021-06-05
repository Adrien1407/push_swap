# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/17 15:30:32 by adrienlan         #+#    #+#              #
#    Updated: 2021/06/05 14:48:28 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= pushswap.a
SRCS		= $(addprefix ./srcs/, ${SRCS_FILES})
SRCS_FILES	= \
			  fill_struct.c \
			  find_pivot.c \
			  init_struct.c \
			  choose_direction.c \
			  free_and_exit.c \
			  add_element.c \
			  operators/pa_pb.c \
			  operators/ra_rb_rr.c \
			  operators/rra_rrb_rrr.c \
			  operators/sa_sb_ss.c \
			  is_not_sorted.c \
			  sort.c \
			  sort_three.c \
			  ps_atoi.c \
			  ps_delete_first.c \
			  bubble_sort_a.c \
			  bubble_sort_b.c \

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
