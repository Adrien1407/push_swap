/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:56:32 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/04 16:09:09 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static	int	is_median(t_tab *tab, int i)
{
	int		more;
	int		k;

	k = 0;

	more = 0;

	while (k < tab->size)
	{
		if(tab->tab[k] > tab->tab[i])
			more++;
		if(tab->tab[k] < tab->tab[i])
			more--;
		k++;
	}
	if (more == 0 || more == 1)
		return (1);
	return (0);
}
int			find_pivot(t_tab *tab)
{
	int i;
	int pivot;

	i = 0;
	pivot = 0;

	while (i < tab->size)
	{
		if (is_median(tab, i))
			return (tab->tab[i]);
		i++;
	}
	return (0);
}

