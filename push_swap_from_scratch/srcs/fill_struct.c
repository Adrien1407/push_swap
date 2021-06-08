/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:40:10 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/08 14:11:03 by adlancel         ###   ########.fr       */
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
	g->tab_a->pivot[0] = find_pivot(g->tab_a);
	g->tab_a->pivot[1] = find_half_pivot(g->tab_a, g->tab_a->pivot[0]);
	g->tab_a->pivot[2] = find_last_pivot(g->tab_a, g->tab_a->pivot[0]);
	return(g);
}
