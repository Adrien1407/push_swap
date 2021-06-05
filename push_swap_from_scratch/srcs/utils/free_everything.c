/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_everything.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlancelle <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:27:39 by adrienlan         #+#    #+#             */
/*   Updated: 2021/05/17 15:27:56 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	free_everything(t_global *g)
{
	free(g->a->data);
	free(g->b->data);
	free(g->a->size);
	free(g->b->size);
	free(g->a);
	free(g->b);
	free(g);
}
