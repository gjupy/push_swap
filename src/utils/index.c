/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:40:53 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/24 17:49:19 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Iterates over 2 lists and sets the struct variable "index" for each element
in the lists according to its position.
*/
void	set_index(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	i = 1;
	tmp = *stack_a;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
	i = 1;
	tmp = *stack_b;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
}

/*
Compares the struct variable "data" with parameter "value" and returns
the index of the matching element.
Returns 0 if stack is empty or the list length if nothing matched.
*/
int	get_index(t_list **stack, int value)
{
	t_list	*tmp;
	int		i;

	if (!*stack)
		return (0);
	tmp = *stack;
	i = 1;
	while (tmp->val != value)
	{
		tmp = (tmp)->next;
		i++;
	}
	return (i);
}

int	find_min(t_list **stack)
{
	t_list	*tmp;
	int		min;

	tmp = *stack;
	min = tmp->val;
	while (tmp)
	{
		if (min > tmp->val)
			min = tmp->val;
		tmp = tmp->next;
	}
	return (min);
}
