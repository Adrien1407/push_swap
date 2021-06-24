/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:40:10 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/24 17:26:14 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

t_global	*fill_struct(t_global *g, char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
		g->tab_a->tab[j++] = ps_atoi(av[i++], g);
	g->tab_a->pivot[0] = find_pivot(g->tab_a, find_smallest_number(g->tab_a),
			find_biggest_number(g->tab_a));
	g->tab_a->pivot[1] = find_pivot(g->tab_a, find_smallest_number(g->tab_a),
			g->tab_a->pivot[0]);
	g->tab_a->pivot[2] = find_pivot(g->tab_a, g->tab_a->pivot[0],
			find_biggest_number(g->tab_a));
	if (ac > 100)
	{
		g->tab_a->pivot[3] = find_pivot(g->tab_a,
				find_smallest_number(g->tab_a), g->tab_a->pivot[1]);
		g->tab_a->pivot[4] = find_pivot(g->tab_a,
				g->tab_a->pivot[1], g->tab_a->pivot[0]);
		g->tab_a->pivot[5] = find_pivot(g->tab_a,
				g->tab_a->pivot[0], g->tab_a->pivot[2]);
		g->tab_a->pivot[6] = find_pivot(g->tab_a, g->tab_a->pivot[2],
				find_biggest_number(g->tab_a));
	}
	return (g);
}
