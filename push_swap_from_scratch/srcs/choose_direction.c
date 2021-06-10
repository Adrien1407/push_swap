/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_direction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:34:16 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/10 09:51:49 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	choose_direction(t_tab *tab, int wanted_value)
{
	int	i;
	int	direction;

	i = 0;
	direction = 1;
	while (i < tab->size / 2)
	{
		if (tab->tab[i] == wanted_value)
			direction = 0;
		i++;
	}
	return (direction);
}
