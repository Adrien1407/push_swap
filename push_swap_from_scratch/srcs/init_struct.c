/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:23:34 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/10 09:39:08 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"
t_global	*init_tab(t_global *g, int ac)
{
	int	i;

	i = 0;
	g->tab_b->tab = NULL;
	g->tab_b->size = 0;
	g->tab_a->tab = malloc(sizeof(int) * (ac - 1));
	if (!g->tab_a->tab)
	{
		free(g->tab_a);
		free(g->tab_b);
		free(g);
		print_error_and_exit();
	}
	g->tab_a->pivot = malloc(sizeof(int) * 3);
	while (i < 3)
		g->tab_a->pivot[i++] = 0;
	i = 0;
	while (i < ac - 1)
		g->tab_a->tab[i++] = 0;
	g->tab_a->size = ac - 1;
	g->tab_b->tab = NULL;
	return (g);
}

t_global	*init_struct(t_global *g, int ac)
{
	int	i;

	i = 0;
	g = malloc(sizeof(t_global));
	if (!g)
		print_error_and_exit();
	g->tab_a = NULL;
	g->tab_b = NULL;
	g->tab_a = malloc(sizeof(t_tab));
	if (!g->tab_a)
	{
		free(g);
		print_error_and_exit();
	}
	g->tab_a->tab = NULL;
	g->tab_a->size = 0;
	g->tab_b = malloc(sizeof(t_tab));
	if (!g->tab_b)
	{
		free(g->tab_a);
		free(g);
		print_error_and_exit();
	}
	g = init_tab(g, ac);
	return (g);
}
