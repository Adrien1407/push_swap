/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fill_tab_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:40:13 by adrienlan         #+#    #+#             */
/*   Updated: 2021/05/17 15:40:27 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

static void	check_duplicates(t_global *g)
{
	int i;
	int j;

	i = 0;
	while (i < *g->a->size)
	{
		j = i + 1;
		while (j < *g->a->size)
		{
			if (g->a->data[i] == g->a->data[j])
				free_everything_and_exit(g);
			j++;
		}
		i++;
	}
}



void	fill_tab_a(t_global *g, int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		g->a->data[j] = ps_atoi(av[i], g);
		j++;
		i++;
	}
	check_duplicates(g);
}
