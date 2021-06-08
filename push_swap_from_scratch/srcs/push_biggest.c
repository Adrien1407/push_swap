/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_biggest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:31:31 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/08 19:22:09 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	push_biggest(t_global *g)
{
	int i;
	int biggest;

	biggest = find_biggest_number(g->tab_a);
	i = 0;
	while (g->tab_a->size % 4 != 0)
	{
		while (g->tab_a->tab[0]!= biggest)
		{
			if (choose_direction(g->tab_a, biggest))
				rra(g);
			else
				ra(g);
		}
		pb(g);
	}
}
