/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:32:39 by adrienlan         #+#    #+#             */
/*   Updated: 2021/06/24 20:29:07 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_tab
{
	int	*tab;
	int	*pivot;
	int	size;
}				t_tab;

typedef struct s_global
{
	t_tab	*tab_a;
	t_tab	*tab_b;

}				t_global;

t_global		*init_struct(t_global *g, int ac);
t_global		*fill_struct(t_global *g, char **av, int ac);
int				find_pivot(t_tab *tab, int min, int max);
int				is_median(t_tab *tab, int min, int max, int index);
int				choose_direction(t_tab *tab, int wanted_value);
int				is_not_sorted(t_global *g);
int				ps_atoi(const char *str, t_global *g);
int				find_smallest_number(t_tab *tab);
int				find_biggest_number(t_tab *tab);
int				push_biggest(t_global *g);
int				not_sorted(t_global *g);
void			check_duplicates(t_global *g);
void			quick_sort_small(t_global *g);
void			quick_sort_big(t_global *g);
void			quick_sort_bis(t_global *g, int max, int min);
void			quick_sort_ter(t_global *g, int min);
void			quick_sort_quater(t_global *g, int min);
void			bubble_sort_a(t_global *g);
void			bubble_sort_b(t_global *g);
void			sort_three(t_global *g, int *tab);
void			free_everything(t_global *g);
void			print_error_and_exit(void);
void			free_everything_and_exit(t_global *g);
void			add_element(t_global *g, t_tab *tab, int value);
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
void			print_all(t_global *g);
#endif
