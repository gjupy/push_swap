/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:35:46 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/24 17:39:27 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
rotate: Shift up all elements of stack a by 1.
The first element becomes the last one.
*/
void	ra(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (ft_lstsize(*stack) > 1)
	{
		last = ft_lstlast(*stack);
		tmp = *stack;
		*stack = (*stack)->next;
		last->next = tmp;
		tmp->next = NULL;
		ft_printf("ra\n");
	}
}

/*
rotate: Shift up all elements of stack b by 1.
The first element becomes the last one.
*/
void	rb(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (ft_lstsize(*stack) > 1)
	{
		last = ft_lstlast(*stack);
		tmp = *stack;
		*stack = (*stack)->next;
		last->next = tmp;
		tmp->next = NULL;
		ft_printf("rb\n");
	}
}

/*
ra and rb at the same time.
*/
void	rr(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
	{
		ra(stack_a);
		rb(stack_b);
		ft_printf("rr\n");
	}
}
