/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:52:19 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/10 09:48:07 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

static void	sub_r(t_tab *tab)
{
	int	i;
	int	size;
	int	tmp;

	i = 0;
	if (tab)
	{
		if (tab->size)
		{
			if (tab->size > 1)
			{
				size = tab->size;
				tmp = tab->tab[0];
				while (i < size)
				{
					tab->tab[i] = tab->tab[i + 1];
					i++;
				}
				tab->tab[size - 1] = tmp;
			}
		}
	}
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
