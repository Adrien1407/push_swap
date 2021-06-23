/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medians.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:22:58 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/23 18:00:37 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"
int	is_median(t_tab *tab, int min, int max, int index)
{
	int more;
	int k;

	k = 0;
	more = 0;

	while (k < tab->size)
	{
		if (tab->tab[k] > min && tab->tab[k] < max)
		{
			if (tab->tab[k] > tab->tab[index])
				more++;
			if (tab->tab[k] < tab->tab[index])
				more--;
		}
		k++;
	}
		if (more == 0 || more == 1)
			return (1);
	return (0);
}
/*
   int	is_median(t_tab *tab, int i)
   {
   int	more;
   int	k;

   k = 0;
   more = 0;
   while (k < tab->size)
   {
   if (tab->tab[k] > tab->tab[i])
   more++;
   if (tab->tab[k] < tab->tab[i])
   more--;
   k++;
   }
   if (more == 0 || more == 1)
   return (1);
   return (0);
   }

   int	is_half_median(t_tab *tab, int i, int pivot)
   {
   int	more;
   int	k;

   k = 0;
   more = 0;
   while (k < tab->size)
   {
   if (tab->tab[k] > tab->tab[i] && tab->tab[k] < pivot)
   more++;
   if (tab->tab[k] < tab->tab[i] && tab->tab[k] < pivot)
   more--;
   k++;
   }
   if (more == 0 || more == 1)
   return (1);
   return (0);
   }

   int	is_last_median(t_tab *tab, int i, int pivot)
   {
   int	more;
   int	k;

   k = 0;
   more = 0;
   while (k < tab->size)
   {
   if (tab->tab[k] > tab->tab[i] && tab->tab[k] > pivot)
   more++;
   if (tab->tab[k] < tab->tab[i] && tab->tab[k] > pivot)
   more--;
   k++;
   }
   if (more == 0 || more == 1)
   return (1);
   return (0);
   }
   */
