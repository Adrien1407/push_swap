/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_delete_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:32:26 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/10 09:42:44 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ps_delete_first(t_global *g, t_tab *tab)
{
	int	i;
	int	j;
	int	*res;

	i = 1;
	j = 0;
	if (!tab)
		return ;
	if (!tab->size)
		return ;
	tab->size -= 1;
	if (tab->size == 0)
		return ;
	res = malloc (sizeof(int) * tab->size);
	if (!res)
		free_everything_and_exit(g);
	while (i < tab->size + 1)
	{
		res[j] = tab->tab[i];
		i++;
		j++;
	}
	free(tab->tab);
	tab->tab = res;
	return ;
}
