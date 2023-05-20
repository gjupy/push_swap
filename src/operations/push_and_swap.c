/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:49:15 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/24 22:06:46 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
pa : push a - take the first element at the top of b
and put it at the top of a. Do nothing if b is empty.
*/
void	pa(t_list **stack_a, t_list **stack_b, t_size *s)
{
	t_list	*tmp;

	if (stack_b && *stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = (*stack_a);
		(*stack_a) = tmp;
		s->size_b--;
		s->size_a++;
		ft_printf("pa\n");
	}
}

/*
pb : push b - take the first element at the top of a
and put it at the top of b. Do nothing if a is empty.
*/
void	pb(t_list **stack_a, t_list **stack_b, t_size *s)
{
	t_list	*tmp;

	if (stack_a && *stack_a)
	{
		if (!(*stack_b))
		{
			tmp = *stack_a;
			*stack_a = (*stack_a)->next;
			(*stack_b) = tmp;
			tmp->next = NULL;
		}
		else
		{
			tmp = *stack_a;
			*stack_a = (*stack_a)->next;
			tmp->next = (*stack_b);
			(*stack_b) = tmp;
		}
		s->size_a--;
		s->size_b++;
		ft_printf("pb\n");
	}
}

/*
swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/
void	sa(t_list **stack)
{
	t_list	*tmp;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = (*stack)->next;
		(*stack)->next = tmp;
		ft_printf("sa\n");
	}
}

/*
swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
void	sb(t_list **stack)
{
	t_list	*tmp;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = (*stack)->next;
		(*stack)->next = tmp;
		ft_printf("sb\n");
	}
}

/*
ss : sa and sb at the same time.
*/
void	ss(t_list **stack_a, t_list **stack_b)
{
	if (stack_a && stack_b)
	{
		sa(stack_a);
		sb(stack_b);
		ft_printf("ss\n");
	}
}
