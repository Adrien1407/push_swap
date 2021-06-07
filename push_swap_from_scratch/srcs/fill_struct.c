/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:40:10 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/07 16:14:27 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

t_global	*fill_struct(t_global *g, char **av, int ac)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		g->tab_a->tab[j] = ps_atoi(av[i],g);
		i++;
		j++;
	}
	return(g);
}
