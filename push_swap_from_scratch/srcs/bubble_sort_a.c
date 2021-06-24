/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:22:45 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/24 18:20:31 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	bubble_sort_a(t_global *g)
{
	int i;
	int smallest_number;
	while (g->tab_a->size)
	{
		smallest_number = find_smallest_number(g->tab_a);
		if (g->tab_a->size == 3)
		{
			sort_three(g, g->tab_a->tab);
			break ;
		}
		while (g->tab_a->tab[0] != smallest_number)
		{
			if (choose_direction(g->tab_a, smallest_number))
				rra(g);
			else
				ra(g);
		}
		pb(g);
		i = 0;
		i++;
	}
	while (g->tab_b->size)
		pa(g);
}
