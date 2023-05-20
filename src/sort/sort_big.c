/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:43:12 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/24 17:42:22 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static bool	is_second_largest(int rank, t_list **stack_b)
{
	int	second_largest;

	second_largest = find_max_rank(stack_b) - 1;
	if (rank == second_largest)
		return (true);
	else
		return (false);
}

static bool	is_third_largest(int rank, t_list **stack_b)
{
	int	third_largest;

	third_largest = find_max_rank(stack_b) - 2;
	if (rank == third_largest)
		return (true);
	else
		return (false);
}

static void	push_max(t_list **stack_a, t_list **stack_b, t_size *s)
{
	int	second_largest;
	int	third_largest;

	third_largest = find_max_rank(stack_b) - 2;
	second_largest = find_max_rank(stack_b) - 1;
	pa(stack_a, stack_b, s);
	if ((*stack_a)->next->rank == second_largest)
		sa(stack_a);
	if (ft_lstlast(*stack_a)->rank == third_largest)
		rra(stack_a);
}

static void	push_b_to_a(t_list **stack_a, t_list **stack_b, t_size *s)
{
	t_list	*tmp;

	set_rankloop(*stack_b);
	set_index(stack_a, stack_b);
	tmp = *stack_b;
	while (tmp && ft_lstsize(*stack_b) > 0)
	{
		if (is_second_largest(tmp->rank, stack_b))
			pa(stack_a, stack_b, s);
		else if (is_third_largest(tmp->rank, stack_b))
		{
			pa(stack_a, stack_b, s);
			ra(stack_a);
		}
		else if (tmp->rank == find_max_rank(stack_b))
			push_max(stack_a, stack_b, s);
		else if (get_index(stack_b,
				find_max_val(stack_b)) >= (ft_lstsize(*stack_b) / 2))
			rrb(stack_b);
		else
			rb(stack_b);
		tmp = *stack_b;
	}
}

void	sort_big(t_list **stack_a, t_list **stack_b, t_size *s)
{
	set_rankloop(*stack_a);
	push_chunks(stack_a, stack_b, s);
	push_b_to_a(stack_a, stack_b, s);
}
