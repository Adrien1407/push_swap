/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:58:44 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/10 09:50:27 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

static void	sub_s(t_tab *tab)
{
	int	tmp;

	tmp = 0;
	if (tab)
	{
		if (tab->size)
		{
			if (tab->size > 1)
			{
				tmp = 0;
				tmp = tab->tab[0];
				tab->tab[0] = tab->tab[1];
				tab->tab[1] = tmp;
			}
		}
	}
}

void	sa(t_global *g)
{
	sub_s(g->tab_a);
	write(1, "sa\n", 3);
}

void	sb(t_global *g)
{
	sub_s(g->tab_b);
	write(1, "sb\n", 3);
}

void	ss(t_global *g)
{
	sub_s(g->tab_a);
	sub_s(g->tab_b);
	write(1, "ss\n", 3);
}
