/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:56:32 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/10 10:27:06 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	find_pivot(t_tab *tab)
{
	int	i;

	i = 0;
	while (i < tab->size)
	{
		if (is_median(tab, i))
			return (tab->tab[i]);
		i++;
	}
	return (0);
}

int	find_half_pivot(t_tab *tab, int n)
{
	int	i;

	i = 0;
	while (i < tab->size)
	{
		if (is_half_median(tab, i, n))
			return (tab->tab[i]);
		i++;
	}
	return (0);
}

int	find_last_pivot(t_tab *tab, int n)
{
	int	i;

	i = 0;
	while (i < tab->size)
	{
		if (is_last_median(tab, i, n))
			return (tab->tab[i]);
		i++;
	}
	return (0);
}
