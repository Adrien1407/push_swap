/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:22:45 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/05 15:04:04 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int	find_smallest_number(t_tab* tab)
{
	int smallest_number = tab->tab[0];
	int i = 1;
	while (i < tab->size)
	{
		if (tab->tab[i] < smallest_number)
			smallest_number = tab->tab[i];
		i++;
	}
	return smallest_number;
}
void	bubble_sort_b(t_global *g)
{
	int i;
	int smallest_number;
	while (g->tab_b->size)
	{
		smallest_number = find_smallest_number(g->tab_b);
		if (g->tab_b->size == 3)
		{
			sort_three(g, g->tab_b->tab);
			break ;
		}
		while (g->tab_b->tab[0] != smallest_number)
		{
			if (choose_direction(g->tab_b, smallest_number))
				rrb(g);
			else
				rb(g);
		}
		if (g->tab_b->tab[0] == smallest_number)
		{
			pa(g);
			i = 0;
		}
		i++;
	}
	while (g->tab_b->size > 0)
		pa(g);
}
