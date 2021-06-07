/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:29:48 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/07 18:28:44 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	quick_sort(t_global *g)
{
	int i;
	int pivot;
	int first_pivot;
	int last_pivot;
	int t;


	i = 0;
	t = g->tab_a->size;

	pivot = find_pivot(g->tab_a);
	first_pivot = find_half_pivot(g->tab_a, pivot);
	last_pivot = find_last_pivot(g->tab_a, pivot);

	while (g->tab_a->size > ((t * 3) / 4))
	{
		if (g->tab_a->tab[0] > last_pivot)
			pb(g);
		else
			ra(g);
	}
	while (g->tab_b->size > 0)
	{
		bubble_sort_b(g);
	}

	while (g->tab_a->size > ((t * 3) / 4) -1)
	{
		if (g->tab_a->tab[0] >= pivot && g->tab_a->tab[0] <= last_pivot)
			pb(g);
		else
			ra(g);
	}
	while (g->tab_b->size > 0)
		bubble_sort_b(g);
	while (g->tab_a->size > ((t * 3) / 4))
	{
		if (g->tab_a->tab[0] >= first_pivot && g->tab_a->tab[0] < pivot)
			pb(g);
		else
			ra(g);
	}
	while (g->tab_b->size > 0)
		bubble_sort_b(g);
	while (g->tab_a->size > ((t * 3) / 4) + 1)
	{
		if (g->tab_a->tab[0] < first_pivot)
			pb(g);
		else
			ra(g);
	}
	while (g->tab_b->size > 0)
		bubble_sort_b(g);
}

