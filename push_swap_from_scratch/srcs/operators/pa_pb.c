/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:38:43 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/04 17:28:34 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	pa(t_global *g)
{
	if (g->tab_b)
		if (g->tab_b->size)
		{
			add_element(g, g->tab_a, g->tab_b->tab[0]);
			ps_delete_first(g, g->tab_b);
		}
	write(1, "pa\n", 3);
}

void	pb(t_global *g)
{
	if (g->tab_a)
		if (g->tab_a->size)
		{
		add_element(g, g->tab_b, g->tab_a->tab[0]);
		ps_delete_first(g, g->tab_a);
		}
		write (1, "pb\n", 3);
}
