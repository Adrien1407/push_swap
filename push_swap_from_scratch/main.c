/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:42:43 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/10 10:33:30 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./includes/pushswap.h"

int	main(int ac, char **av)
{
	t_global	*g;

	g = NULL;
	if (ac < 2)
		print_error_and_exit();
	g = init_struct(g, ac);
	g = fill_struct(g, av, ac);
	if (g->tab_a->size == 3)
	{
		sort_three(g, g->tab_a->tab);
		free_everything(g);
		return (0);
	}
	quick_sort(g);
	free_everything(g);
	return (0);
}
