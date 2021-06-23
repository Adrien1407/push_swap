/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:29:48 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/23 18:24:14 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	quick_sort_small(t_global *g)
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
void	quick_sort_big(t_global *g)
{
	int i;

	i = 0;
	while (i < g->tab_a->size)
	{
		if	(g->tab_a->tab[0] >= g->tab_a->pivot[6])
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	printf ("222222222222222222222222222222222222");
	}
	bubble_sort_b(g);
	i = 0;
	while (i < g->tab_a->size)
	{
		if	((g->tab_a->tab[0] < g->tab_a->pivot[6]) && (g->tab_a->tab[0] >= g->tab_a->pivot[2]))
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	printf ("3333333333333333333333333333333333333");
	}
	bubble_sort_b(g);
	i = 0;
	while (i < g->tab_a->size)
	{
		if	((g->tab_a->tab[0] < g->tab_a->pivot[2]) && (g->tab_a->tab[0] >= g->tab_a->pivot[5]))
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	printf ("44444444444444444444444444444444444444444");
	}
	bubble_sort_b(g);
	i = 0;
	while (i < g->tab_a->size)
	{
		if	(g->tab_a->tab[0] < g->tab_a->pivot[5] && (g->tab_a->tab[0] >= g->tab_a->pivot[0]))
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	}
	printf ("555555555555555555555555555555555555555555555");
	bubble_sort_b(g);
	i = 0;
	while (i < g->tab_a->size)
	{
		if	((g->tab_a->tab[0] < g->tab_a->pivot[0]) && (g->tab_a->tab[0] >= g->tab_a->pivot[4]))
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	}
	printf ("77777777777777777777777777777777777777777777777");
	bubble_sort_b(g);
	i = 0;
	while (i < g->tab_a->size)
	{
		if	((g->tab_a->tab[0] < g->tab_a->pivot[4]) && (g->tab_a->tab[0] >= g->tab_a->pivot[1]))
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	}
	printf ("8888888888888888888888888888888888888888888888888");
	bubble_sort_b(g);
	i = 0;
	while (i < g->tab_a->size)
	{
		if	((g->tab_a->tab[0] < g->tab_a->pivot[1]) && (g->tab_a->tab[0] >= g->tab_a->pivot[3]))
		{
			pb(g);
			i--;
		}
		else
			ra(g);
		i++;
	}
	printf ("9999999999999999999999999999999999999999999999999999");
	bubble_sort_b(g);
	i = 0;
	while (i < g->tab_a->size)
	{
		if	(g->tab_a->tab[0] < g->tab_a->pivot[3])
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
