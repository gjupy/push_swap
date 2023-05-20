/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-2_cases_three_nbrs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:24:26 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/24 17:45:15 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

bool	case_zero(t_list *stack, t_size *s)
{
	int	a;
	int	b;

	a = stack->val;
	b = stack->next->val;
	if (s->size_og == 2 && a > b)
		return (true);
	return (false);
}

/*
case one: smallest at the middle and biggest at the bottom
*/
bool	case_one(t_list *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->val;
	b = stack->next->val;
	c = stack->next->next->val;
	if ((a > b) && (b < c) && (c > a))
		return (true);
	return (false);
}

/*
case two: smallest at the bottom and biggest at the top
*/
bool	case_two(t_list *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->val;
	b = stack->next->val;
	c = stack->next->next->val;
	if ((a > b) && (b > c) && (c < a))
		return (true);
	return (false);
}
