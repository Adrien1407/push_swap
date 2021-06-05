/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:15:12 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/03 17:55:39 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	print_error_and_exit()
{
	write(2, "Error\n", 6);
	exit(1);

}

void	free_everything_and_exit(t_global *g)
{
	free_everything(g);
	write(2, "Error\n", 6);
	exit(1);
}

void	free_everything(t_global *g)
{
	free(g->tab_a->tab);
	free(g->tab_b->tab);
	free(g->tab_a);
	free(g->tab_b);
	free(g);
}
