/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:42:43 by adlancel          #+#    #+#             */
/*   Updated: 2021/06/23 18:05:00 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./includes/pushswap.h"
void	print_all(t_global *g)
  {
  int i;

  i = 0;
  printf("%s\n", "=====================");
  printf("%s\n", "[ TABLE A ]");
  printf("%s\n", "---------------------");
  if (g->tab_a->size)
  {

  printf("Size : %d\n", g->tab_a->size);
  printf("%s\n", "---------------------");
  while (i < g->tab_a->size)
  {
  printf("%d\n", g->tab_a->tab[i]);
  i++;
  }
  }
  else
  printf("%s\n", "TABLE A EMPTY");
  printf("%s\n", "=====================");

  i = 0;
  printf("%s\n", "=====================");
  printf("%s\n", "[ TABLE B ]");
  printf("%s\n", "---------------------");
  if (g->tab_b->size)
  {
  printf("Size : %d\n", g->tab_b->size);
  printf("%s\n", "---------------------");
  while (i < g->tab_b->size)
  {
  printf("%d\n", g->tab_b->tab[i]);
  i++;
  }
  }
  else
  printf("%s\n", "TABLE B EMPTY");
  printf("%s\n", "=====================");
  }

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
	else if (g->tab_a->size == 5)
	{
		bubble_sort_a(g);
		bubble_sort_b(g);
	}
	else if (ac < 150)
		quick_sort_small(g);
	else 
		quick_sort_big(g);
	free_everything(g);
	return (0);
}
