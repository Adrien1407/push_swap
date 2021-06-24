/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:23:55 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/24 20:29:09 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	check_duplicates(t_global *g)
{
	int	i;
	int	j;

	i = 0;
	while (i < g->tab_a->size)
	{
		j = i + 1;
		while (j < g->tab_a->size)
		{
			if (g->tab_a->tab[i] == g->tab_a->tab[j])
				free_everything_and_exit(g);
			j++;
		}
		i++;
	}
}
