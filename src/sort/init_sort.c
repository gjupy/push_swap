/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 10:24:39 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/25 13:58:00 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static bool	is_sorted(t_list *stack_a)
{
	t_list	*tmp;

	tmp = stack_a;
	while (tmp->next)
	{
		if (tmp->val > tmp->next->val)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

void	init_sort(t_list **stack_a, t_list **stack_b, t_size *s)
{
	if (s->size_og == 1)
		return ;
	if (is_sorted(*stack_a))
		return ;
	if (s->size_og <= 3)
		sort_three_nbrs(stack_a, s);
	else if (s->size_og < 10)
		sort_five_nbrs(stack_a, stack_b, s);
	else
		sort_big(stack_a, stack_b, s);
}
