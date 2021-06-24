/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:19:00 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/24 20:19:20 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	not_sorted(t_global *g)
{
	int	i;

	i = 1;
	while (i < g->tab_a->size)
	{
		if (g->tab_a->tab[i - 1] > g->tab_a->tab[i])
			return (1);
		i++;
	}
	return (0);
}

