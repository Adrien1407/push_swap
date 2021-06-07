/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:22:45 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/07 12:27:30 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static int	find_biggest_number(t_tab* tab)
{
	int biggest_number;
	int i = 1;
	 biggest_number = tab->tab[0];
	while (i < tab->size)
	{
		if (tab->tab[i] > biggest_number)
			biggest_number = tab->tab[i];
		i++;
	}
	return (biggest_number);
}
void	bubble_sort_b(t_global *g)
{
	int i;
	int biggest_number;
	while (g->tab_b->size)
	{
		biggest_number = find_biggest_number(g->tab_b);
		while (g->tab_b->tab[0] != biggest_number)
		{
			if (choose_direction(g->tab_b, biggest_number))
				rrb(g);
			else
				rb(g);
		}
			pa(g);
			i = 0;
		i++;
	}
	while (g->tab_b->size > 0)
		pa(g);
}
