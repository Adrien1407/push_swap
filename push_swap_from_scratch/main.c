/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:42:43 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/24 20:38:06 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./includes/pushswap.h"

int	main(int ac, char **av)
{
	t_global	*g;

	g = NULL;
	if (ac == 2 || ac == 1)
		return (0);
	g = init_struct(g, ac);
	g = fill_struct(g, av, ac);
	check_duplicates(g);
	if (not_sorted(g))
	{
		if (g->tab_a->size == 2)
			sa(g);
		else if (g->tab_a->size == 3)
			sort_three(g, g->tab_a->tab);
		else if (g->tab_a->size == 5)
			bubble_sort_a(g);
		else if (ac < 120)
			quick_sort_small(g);
		else if (ac >= 120)
			quick_sort_big(g);
	}
	free_everything(g);
	return (0);
}
