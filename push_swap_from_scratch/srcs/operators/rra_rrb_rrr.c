/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:54:51 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/10 09:49:09 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h" 

static void	sub_rr(t_tab *tab)
{
	int	size;
	int	tmp;

	if (tab)
	{
		if (tab->size)
		{
			if (tab->size > 1)
			{
				size = tab->size;
				tmp = tab->tab[size - 1];
				while (size > 0)
				{
					tab->tab[size] = tab->tab[size - 1];
					size--;
				}
				tab->tab[0] = tmp;
			}
		}
	}
	return ;
}

void	rra(t_global *g)
{
	sub_rr(g->tab_a);
	write(1, "rra\n", 4);
	return ;
}

void	rrb(t_global *g)
{
	sub_rr(g->tab_b);
	write(1, "rrb\n", 4);
	return ;
}

void	rrr(t_global *g)
{
	sub_rr(g->tab_a);
	sub_rr(g->tab_b);
	write(1, "rrr\n", 4);
	return ;
}
