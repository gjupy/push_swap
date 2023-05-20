/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:22:52 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/24 17:50:04 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
	Iterates over stack and compares the struct variable "content"
	from the current element from ft_set_rankloop() with the compare_to element
	from ft_set_rank(). The elements will be ranked lowest to highest "content"
	no matter the index of the element itself.
*/
void	set_rank(t_list **stack_a, t_list *current)
{
	t_list	*compare_to;

	compare_to = *stack_a;
	current->rank = 1;
	while (compare_to)
	{
		if (current->val > compare_to->val)
			current->rank++;
		compare_to = compare_to->next;
	}
}

/*
	Iterates over stack using the function ft_set_rank on every element.
*/
void	set_rankloop(t_list *stack_a)
{
	t_list	*current;

	current = stack_a;
	while (current)
	{
		set_rank(&stack_a, current);
		current = current->next;
	}
}

/*
	Iterates over stack looking for the highest rank in stack and returns the rank.
*/
int	find_max_rank(t_list **stack)
{
	t_list	*tmp;
	int		max;

	tmp = *stack;
	max = tmp->rank;
	while (tmp)
	{
		if (tmp->rank > max)
			max = tmp->rank;
		tmp = tmp->next;
	}
	return (max);
}

/*
	Iterates over stack looking for the highest rank in stack and returns the rank.
*/
int	find_max_val(t_list **stack)
{
	t_list	*tmp;
	int		max;

	tmp = *stack;
	max = tmp->val;
	while (tmp)
	{
		if (tmp->val > max)
			max = tmp->val;
		tmp = tmp->next;
	}
	return (max);
}

/*
	Iterates over stack looking for the lowest rank in stack and returns the rank.
*/
int	find_min_rank(t_list **stack)
{
	t_list	*tmp;
	int		min;

	tmp = *stack;
	min = tmp->rank;
	while (tmp)
	{
		if (tmp->rank < min)
			min = tmp->rank;
		tmp = tmp->next;
	}
	return (min);
}
