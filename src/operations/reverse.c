/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:36:11 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/24 17:36:36 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
(reverse rotate): Shift down all elements of stack a by 1.
The last element becomes the first one.
*/
void	rra(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*previous;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = *stack;
		while (tmp->next)
		{
			previous = tmp;
			tmp = tmp->next;
		}
		last = ft_lstlast(*stack);
		tmp = *stack;
		*stack = last;
		last->next = tmp;
		previous->next = NULL;
		ft_printf("rra\n");
	}
}

/*
(reverse rotate): Shift down all elements of a stack b by 1.
The last element becomes the first one.
*/
void	rrb(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*previous;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = *stack;
		while (tmp->next)
		{
			previous = tmp;
			tmp = tmp->next;
		}
		last = ft_lstlast(*stack);
		tmp = *stack;
		*stack = last;
		last->next = tmp;
		previous->next = NULL;
		ft_printf("rrb\n");
	}
}

// rrr : rra and rrb at the same time.
void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
	{
		rra(stack_a);
		rrb(stack_b);
		ft_printf("rrr\n");
	}
}
