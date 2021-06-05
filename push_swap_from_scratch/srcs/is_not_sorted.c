/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_not_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:00:48 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/04 14:01:29 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	is_not_sorted(t_global *g)
{
	int i;

	i = 0;
	if (g->tab_b->size != 0)
		return (1);
	while (i < g->tab_a->size)
	{
		if (g->tab_a->tab[i] > g->tab_a->tab[i - 1])
			return (1);
		i++;
	}
	return (0);
}
