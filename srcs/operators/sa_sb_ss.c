/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:03:29 by adrienlan         #+#    #+#             */
/*   Updated: 2021/05/17 15:04:05 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

static void	sub_s(t_tab *tab)
{
	int tmp;

	if (tab)
		if (tab->size)
			if (*tab->size > 1)
			{
				tmp = 0;
				tmp = tab->data[0];
				tab->data[0] = tab->data[1];
				tab->data[1] = tmp;
			}
}

void		sa(t_global *g)
{
	sub_s(g->a);
	write(1, "sa\n", 3);
}

void		sb(t_global *g)
{
	sub_s(g->b);
	write(1, "sb\n", 3);
}

void		ss(t_global *g)
{
	sub_s(g->a);
	sub_s(g->b);
	write(1, "ss\n", 3);
}
