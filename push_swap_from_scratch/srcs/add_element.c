/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_element.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:02:05 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/10 09:50:49 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	add_element(t_global *g, t_tab *tab, int value)
{
	int	i;
	int	j;
	int	*ret;

	i = 1;
	j = 0;
	tab->size += 1;
	ret = malloc(sizeof(int) * tab->size);
	if (!ret)
		free_everything_and_exit(g);
	ret[0] = value;
	while (j < tab->size - 1)
		ret[i++] = tab->tab[j++];
	free(tab->tab);
	tab->tab = ret;
}
