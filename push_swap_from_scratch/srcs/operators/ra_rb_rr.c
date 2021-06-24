/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:52:19 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/24 14:49:10 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

static void	sub_r(t_tab *tab)
{
	int	i;
	int	tmp;

	i = 0;
	if (tab)
	{
		if (tab->size > 1)
		{
			tmp = tab->tab[0];
			while (i < tab->size - 1)
			{
				tab->tab[i] = tab->tab[i + 1];
				i++;
			}
			tab->tab[tab->size - 1] = tmp;
		}
	}
	return ;
}

void	ra(t_global *g)
{
	sub_r(g->tab_a);
	write(1, "ra\n", 3);
	return ;
}

void	rb(t_global *g)
{
	sub_r(g->tab_b);
	write(1, "rb\n", 3);
	return ;
}

void	rr(t_global *g)
{
	sub_r(g->tab_a);
	sub_r(g->tab_b);
	write(1, "rr\n", 3);
	return ;
}
