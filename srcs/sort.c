/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:29:48 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/05 14:41:55 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	quick_sort(t_tab *tab, t_global *g)
{
	int i;
	int pivot;
	int tmp;

	i = 0;
	pivot = find_pivot(tab);
	printf ("pvot =%d\n", pivot);
	while (i < tab->size)
	{
		tmp = tab->tab[i];
		if (tab->tab[i] <= pivot)
		{
			while (tab->tab[0] != tmp)
			{
				if (choose_direction(tab, tmp))
					rra(g);
				else
					ra(g);
			}
			i = 0;
			pb(g);
		}
		i++;
	}
	if(tab->size == 1)
		pb(g);
			print_all(g);
}
