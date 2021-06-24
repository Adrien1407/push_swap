/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_bis.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:42:11 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/24 19:35:17 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	quick_sort_bis(t_global *g, int max, int min)
{
	int	i;

	i = 0;
	while (i < g->tab_a->size)
	{
		if ((g->tab_a->tab[0] < max) && (g->tab_a->tab[0] >= min))
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

void	quick_sort_ter(t_global *g, int min)
{
	int	i;

	i = 0;
	while (i < g->tab_a->size)
	{
		if (g->tab_a->tab[0] >= min)
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

void	quick_sort_quater(t_global *g, int max)
{
	int	i;

	i = 0;
	while (i < g->tab_a->size)
	{
		if (g->tab_a->tab[0] < max)
		{
			pb(g);
			i--;
		}
		i++;
	}
	bubble_sort_b(g);
}
