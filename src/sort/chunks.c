/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:46:02 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/25 14:02:57 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_two_chunks(t_list **stack_a, t_list **stack_b, t_size *s, int div)
{
	static int	sum = 0;
	t_list		*tmp;
	int			to_push;
	int			chunk;

	chunk = s->size_og / div;
	to_push = (s->size_og / div) * 2;
	tmp = *stack_a;
	while (tmp && ft_lstsize(*stack_a) > (s->size_og - (sum + to_push)))
	{
		if ((tmp->rank > sum && (tmp->rank <= (sum + (s->size_og / div)))))
		{
			pb(stack_a, stack_b, s);
			rb(stack_b);
		}
		else if ((tmp->rank > (sum + chunk))
			&& (tmp->rank <= (sum + to_push)))
			pb(stack_a, stack_b, s);
		else
			ra(stack_a);
		tmp = *stack_a;
	}
	sum += to_push;
}

void	push_one_chunk(t_list **stack_a, t_list **stack_b, t_size *s, int div)
{
	t_list	*tmp;
	int		chunk;

	chunk = s->size_og / div;
	tmp = *stack_a;
	while (tmp && ft_lstsize(*stack_a) > chunk)
	{
		if (tmp->rank <= (s->size_og - chunk))
			pb(stack_a, stack_b, s);
		else
			ra(stack_a);
		tmp = *stack_a;
	}
}

void	push_last_chunk(t_list **stack_a, t_list **stack_b, t_size *s)
{
	t_list	*tmp;

	while (ft_lstsize(*stack_a) > 1)
	{
		rotate_to_min(stack_a, s);
		pb(stack_a, stack_b, s);
	}
}

void	push_chunks(t_list **stack_a, t_list **stack_b, t_size *s)
{
	int	count;

	count = 0;
	if (s->size_og <= 100)
	{
		push_two_chunks(stack_a, stack_b, s, 4);
		push_one_chunk(stack_a, stack_b, s, 4);
		push_last_chunk(stack_a, stack_b, s);
	}
	else if (s->size_og > 100)
	{
		while (count++ < 8)
			push_two_chunks(stack_a, stack_b, s, 18);
		push_one_chunk(stack_a, stack_b, s, 18);
		push_last_chunk(stack_a, stack_b, s);
	}
}

// static bool	is_chunk_1(int rank)
// {
// 	if (rank >= 1 && rank <= 25)
// 		return (true);
// 	return (false);
// }

// static bool	is_chunk_2(int rank)
// {
// 	if (rank >= 26 && rank <= 50)
// 		return (true);
// 	return (false);
// }

// static bool	is_chunk_3(int rank)
// {
// 	if (rank >= 51 && rank <= 75)
// 		return (true);
// 	return (false);
// }

// static bool	is_chunk_4(int rank)
// {
// 	if (rank >= 76 && rank <= 100)
// 		return (true);
// 	return (false);
// }

// void	move_chunk_1_and_2(t_list **stack_a, t_list **stack_b, t_size *s)
// {
// 	t_list	*tmp;
// 	int		chunk_size_1_plus_2;

// 	chunk_size_1_plus_2 = ft_lstsize(*stack_a) / 2;
// 	tmp = *stack_a;
// 	while (tmp && ft_lstsize(*stack_a) > chunk_size_1_plus_2)
// 	{
// 		if (is_chunk_1(tmp->rank))
// 		{
// 			// printf("rank: %d	val: %d\n", tmp->rank, tmp->val);
// 			// if (tmp->rank == 23)
// 			// 	printf("HIER\n");
// 			pb(stack_a, stack_b, s);
// 			rb(stack_b);
// 		}
// 		else if (is_chunk_2(tmp->rank))
// 		{
// 			// printf("rank: %d	val: %d\n", tmp->rank, tmp->val);
// 			pb(stack_a, stack_b, s);
// 		}
// 		else
// 			ra(stack_a);
// 		tmp = *stack_a;
// 	}
// }

// void	move_chunk_3_and_4(t_list **stack_a, t_list **stack_b, t_size *s)
// {
// 	t_list	*tmp;

// 	tmp = *stack_a;
// 	while (tmp && ft_lstsize(*stack_a) > 0)
// 	{
// 		if (is_chunk_3(tmp->rank))
// 		{
// 			pb(stack_a, stack_b, s);
// 			rb(stack_b);
// 		}
// 		else if (is_chunk_4(tmp->rank))
// 			pb(stack_a, stack_b, s);
// 		else
// 			ra(stack_a);
// 		tmp = *stack_a;
// 	}
// }
