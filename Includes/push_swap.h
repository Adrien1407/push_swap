/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:32:39 by adrienlan         #+#    #+#             */
/*   Updated: 2021/05/17 15:41:03 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


typedef struct	s_tab
{
	int *data;
	int *size;
}				t_tab;

typedef struct	s_global
{
	int *tab_a;
	int *tab_b;

	int tab_a_size;
	int tab_b_size;

	t_tab *a;
	t_tab *b;

	char **av;
}				t_global;

int				ps_atoi(const char *str, t_global *g);
void			print_error_and_exit(void);
void			free_everything_and_exit(t_global *g);
void			free_everything(t_global *g);
void			ps_prepend(t_global *g, t_tab *tab, int value);
void	fill_tab_a(t_global *g, int ac, char **av);

void			ps_delete_first(t_global *g, t_tab *tab);
void			ss(t_global *g);
void			sb(t_global *g);
void			sa(t_global *g);
void			pb(t_global *g);
void			pa(t_global *g);
void			ra(t_global *g);
void			rb(t_global *g);
void			rr(t_global *g);
void			rra(t_global *g);
void			rrb(t_global *g);
void			rrr(t_global *g);

#endif
