/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:02:22 by adrienlan         #+#    #+#             */
/*   Updated: 2021/05/17 16:06:11 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

static void	sub_rr(t_tab *tab)
{
	int size;
	int tmp;

	if (tab)
		if (tab->size)
			if (*tab->size > 1)
			{
				size = *tab->size;
				tmp = tab->data[size - 1];
				while (size > 0)
				{
					tab->data[size] = tab->data[size - 1];
					size--;
				}
				tab->data[0] = tmp;
			}
	return ;
}

void		rra(t_global *g)
{
	sub_rr(g->a);
	write(1, "rra\n", 4);
	return ;
}

void		rrb(t_global *g)
{
	sub_rr(g->b);
	write(1, "rrb\n", 4);
	return ;
}

void		rrr(t_global *g)
{
	sub_rr(g->a);
	sub_rr(g->b);
	write(1, "rrr\n", 4);
	return ;
}
