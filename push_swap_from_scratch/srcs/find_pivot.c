/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:56:32 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/08 14:12:18 by adlancel         ###   ########.fr       */
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

	i = 0;

	while (i < tab->size)
	{
		if (is_median(tab, i))
			return (tab->tab[i]);
		i++;
	}
	return (0);
}
static	int is_half_median(t_tab *tab, int i, int pivot)
{
	int		more;
	int		k;

	k = 0;
	more = 0;

	while (k < tab->size)
	{
		if(tab->tab[k] > tab->tab[i] && tab->tab[k] < pivot)
			more++;
		if(tab->tab[k] < tab->tab[i] && tab->tab[k] < pivot)
			more--;
		k++;
	}
	if (more == 0 || more == 1)
		return (1);
	return (0);
}
int	find_half_pivot(t_tab *tab, int n)
{
	int i;

	i = 0;
	while (i < tab->size)
	{
		if (is_half_median(tab, i, n))
			return (tab->tab[i]);
		i++;
	}
	return (0);
}

static	int is_last_median(t_tab *tab, int i, int pivot)
{
	int		more;
	int		k;

	k = 0;
	more = 0;

	while (k < tab->size)
	{
		if(tab->tab[k] > tab->tab[i] && tab->tab[k] > pivot)
			more++;
		if(tab->tab[k] < tab->tab[i] && tab->tab[k] > pivot)
			more--;
		k++;
	}
	if (more == 0 || more == 1)
		return (1);
	return (0);
}
int	find_last_pivot(t_tab *tab, int n)
{
	int i;

	i = 0;
	while (i < tab->size)
	{
		if (is_last_median(tab, i, n))
			return (tab->tab[i]);
		i++;
	}
	return (0);
}

