/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:40:10 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/09 17:23:04 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

t_global	*fill_struct(t_global *g, char **av, int ac)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		g->tab_a->tab[j] = ps_atoi(av[i],g);
		i++;
		j++;
	}
//	push_biggest(g);
	g->tab_a->pivot[0] = find_pivot(g->tab_a);
//	printf("g->tab_a->pivot[0] = %d\n", g->tab_a->pivot[0]);
	g->tab_a->pivot[1] = find_half_pivot(g->tab_a, g->tab_a->pivot[0]);
//	printf("g->tab_a->pivot[1] = %d\n", g->tab_a->pivot[1]);
	g->tab_a->pivot[2] = find_last_pivot(g->tab_a, g->tab_a->pivot[0]);
//	printf("g->tab_a->pivot[2] = %d\n", g->tab_a->pivot[2]);
	return(g);
}
