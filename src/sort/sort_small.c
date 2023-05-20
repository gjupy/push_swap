/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:52:43 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/25 13:56:21 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three_nbrs(t_list **stack, t_size *s)
{
	if (s->size_og == 2)
	{
		if (case_zero(*stack, s))
			sa(stack);
		else
			return ;
	}
	else if (case_one(*stack))
		sa(stack);
	else if (case_two(*stack))
	{
		sa(stack);
		rra(stack);
	}
	else if (case_three(*stack))
		ra(stack);
	else if (case_four(*stack))
	{
		sa(stack);
		ra(stack);
	}
	else if (case_five(*stack))
		rra(stack);
}

void	sort_five_nbrs(t_list **stack_a, t_list **stack_b, t_size *s)
{
	while (s->size_a > 3)
	{
		rotate_to_min(stack_a, s);
		pb(stack_a, stack_b, s);
	}
	sort_three_nbrs(stack_a, s);
	while (s->size_b > 0)
		pa(stack_a, stack_b, s);
}
