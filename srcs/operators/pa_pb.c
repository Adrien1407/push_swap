/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:41:02 by adrienlan         #+#    #+#             */
/*   Updated: 2021/05/17 15:01:46 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	pa(t_global *g)
{
	if (g->b)
		if (g->b->size)
		{
			ps_prepend(g, g->a, g->b->data[0]);
			ps_delete_first(g, g->b);
		}
	write(1, "pa\n", 3);
}

void	pb(t_global *g)
{
	if (g->a)
		if (g->a->size)
		{
		ps_prepend(g, g->b, g->a->data[0]);
		ps_delete_first(g, g->a);
		}
		write (1, "pb\n", 3);
}
