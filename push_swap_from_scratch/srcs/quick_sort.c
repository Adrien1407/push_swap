/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:29:48 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/08 14:56:58 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static void	quick_sort_last_quarter(t_global *g)
{
	int	size;

	size = ((g->tab_a->size * 3) / 4);
	while (g->tab_a->size > size)
	{
		if (g->tab_a->tab[0] > g->tab_a->pivot[2])
			pb(g);
		else
			ra(g);
	}
}

static void	quick_sort_first_quarter(t_global *g)
{
	int	size;

	size = (((g->tab_a->size * 3) / 4) + 1);
	while (g->tab_a->size > size)
	{
		if (g->tab_a->tab[0] < g->tab_a->pivot[1])
			pb(g);
		else
			ra(g);
	}
}

static void	quick_sort_middle(t_global *g, int min_value, int max_value)
{
	int	size;

	size = (((g->tab_a->size * 3) / 4 ) - 1);
	while (g->tab_a->size > size)
	{	
		if (g->tab_a->tab[0] >= min_value && g->tab_a->tab[0] <= max_value)
			pb(g);
		else
			ra(g);
	}
}

static void	quick_sort_bis(t_global *g, int min_value, int max_value)
{
	if (min_value != 0 && max_value == 0)
		quick_sort_last_quarter(g);
	if ((min_value > 0) && (max_value > 0))
		quick_sort_middle(g, min_value, max_value);
	if (min_value == 0 && max_value != 0)
		quick_sort_first_quarter(g);
}

void	quick_sort(t_global *g)
{
	int	t;

	t = g->tab_a->size;
	quick_sort_bis(g, g->tab_a->pivot[2], 0);
	bubble_sort_b(g);
	quick_sort_bis(g, g->tab_a->pivot[0], g->tab_a->pivot[2]);
	bubble_sort_b(g);
	quick_sort_bis(g, g->tab_a->pivot[1], g->tab_a->pivot[0]);
	bubble_sort_b(g);
	quick_sort_bis(g, 0, g->tab_a->pivot[1]);
	bubble_sort_b(g);
}
