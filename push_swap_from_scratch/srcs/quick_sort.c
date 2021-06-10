/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:29:48 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/10 09:44:24 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	quick_sort(t_global *g)
{
	int i;

	i = 0;
	while (i < g->tab_a->size)
	{
		if	(g->tab_a->tab[0] >= g->tab_a->pivot[2])
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	}
	bubble_sort_b(g);
	i = 0;
	while (i < g->tab_a->size)
	{
		if	((g->tab_a->tab[0] < g->tab_a->pivot[2]) && (g->tab_a->tab[0] >= g->tab_a->pivot[0]))
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	}
	bubble_sort_b(g);
	i = 0;
	while (i < g->tab_a->size)
	{
		if	((g->tab_a->tab[0] < g->tab_a->pivot[0]) && (g->tab_a->tab[0] >= g->tab_a->pivot[1]))
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	}
	bubble_sort_b(g);
	i = 0;
	while (i < g->tab_a->size)
	{
		if	(g->tab_a->tab[0] < g->tab_a->pivot[1])
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	}
	bubble_sort_b(g);
}
