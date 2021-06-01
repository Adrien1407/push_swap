/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_delete_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:38:13 by adrienlan         #+#    #+#             */
/*   Updated: 2021/05/17 15:38:28 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ps_delete_first(t_global *g, t_tab *tab)
{
	int i;
	int j;
	int *res;

	i = 1;
	j = 0;
	if (!tab)
		return ;
	if (!tab->size)
		return ;
	*tab->size -= 1;
	if (*tab->size == 0)
		return ;
	res = malloc (sizeof(int) * *tab->size);
	if (!res)
		free_everything_and_exit(g);
	while (i < *tab->size + 1)
	{
		res[j] = tab->data[i];
		i++;
		j++;
	}
	free(tab->data);
	tab->data = res;
	return ;
}
