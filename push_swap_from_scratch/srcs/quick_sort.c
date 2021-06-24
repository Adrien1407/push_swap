/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:29:48 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/24 19:34:03 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	quick_sort_small(t_global *g)
{
	quick_sort_ter(g, g->tab_a->pivot[2]);
	quick_sort_bis(g, g->tab_a->pivot[2], g->tab_a->pivot[0]);
	quick_sort_bis(g, g->tab_a->pivot[0], g->tab_a->pivot[1]);
	while (g->tab_a->tab[0] != find_biggest_number(g->tab_a))
		rra(g);
	ra(g);
	quick_sort_quater(g, g->tab_a->pivot[1]);
}

void	quick_sort_big(t_global *g)
{
	quick_sort_ter(g, g->tab_a->pivot[6]);
	quick_sort_bis(g, g->tab_a->pivot[6], g->tab_a->pivot[2]);
	quick_sort_bis(g, g->tab_a->pivot[2], g->tab_a->pivot[5]);
	quick_sort_bis(g, g->tab_a->pivot[5], g->tab_a->pivot[0]);
	quick_sort_bis(g, g->tab_a->pivot[0], g->tab_a->pivot[4]);
	quick_sort_bis(g, g->tab_a->pivot[4], g->tab_a->pivot[1]);
	quick_sort_bis(g, g->tab_a->pivot[1], g->tab_a->pivot[3]);
	while (g->tab_a->tab[0] != find_biggest_number(g->tab_a))
		rra(g);
	ra(g);
	quick_sort_quater(g, g->tab_a->pivot[3]);
}
