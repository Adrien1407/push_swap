/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:56:32 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/23 17:57:22 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	find_pivot(t_tab *tab, int min, int max)
{
	int i;

	i = 0;
	while (i < tab->size)
	{
		if (is_median(tab, min, max, i))
			return (tab->tab[i]);
		i++;
	}
	return (0);
}
