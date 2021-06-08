/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_limits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:07:16 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/08 19:15:57 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	find_smallest_number(t_tab* tab)
{
	int smallest_number = tab->tab[0];
	int i = 1;
	while (i < tab->size)
	{
		if (tab->tab[i] < smallest_number)
			smallest_number = tab->tab[i];
		i++;
	}
	return (smallest_number);
}

int	find_biggest_number(t_tab* tab)
{
	int biggest_number;
	int i = 1;
	 biggest_number = tab->tab[0];
	while (i < tab->size)
	{
		if (tab->tab[i] > biggest_number)
			biggest_number = tab->tab[i];
		i++;
	}
	return (biggest_number);
}
