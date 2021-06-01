/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_prepend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:28:14 by adrienlan         #+#    #+#             */
/*   Updated: 2021/05/17 15:28:52 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ps_prepend(t_global *g, t_tab *tab, int value)
{
	int i;
	int j;
	int *res;

	i = 1;
	j = 0;
	*tab->size += 1;
	res = malloc (sizeof(int) * *tab->size);
	if (!res)
		free_everything_and_exit(g);
	res[0] = value;
	while (j < *tab->size - 1)
		res[i++] = tab->data[j++];
	free(tab->data);
	tab->data = res;
	return ;
}
