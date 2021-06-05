/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:49:10 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/03 13:50:33 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sort_three(t_global *g, int *tab)
{
	tab = g->tab_a->tab;

	if (tab[0] > tab[1] && tab[1] < tab[2])
		sa(g);
	if (tab[0] > tab[1] && tab[1] > tab[2])
	{
		sa(g);
		rra(g);
	}
	if (tab[0] > tab[1] && tab[1] < tab[2])
		ra(g);
	if (tab[1] > tab[0] && tab[1] > tab[2] && tab[2] > tab[0])
	{
		sa(g);
		ra(g);
	}
	if (tab[1] > tab[0] && tab[1] > tab[2] && tab[2] < tab[0])
		rra(g);
}
