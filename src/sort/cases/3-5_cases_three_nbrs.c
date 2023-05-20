/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-5_cases_three_nbrs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:24:26 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/24 17:44:16 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

/*
case three: smallest at the middle and biggest at the top
*/
bool	case_three(t_list *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->val;
	b = stack->next->val;
	c = stack->next->next->val;
	if ((a > b) && (b < c) && (c < a))
		return (true);
	return (false);
}

/*
case four: smallest at the top and biggest at the middle
*/
bool	case_four(t_list *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->val;
	b = stack->next->val;
	c = stack->next->next->val;
	if ((a < b) && (b > c) && (c > a))
		return (true);
	return (false);
}

/*
case five: smallest at the bottom and biggest at the middle
*/
bool	case_five(t_list *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->val;
	b = stack->next->val;
	c = stack->next->next->val;
	if ((a < b) && (b > c) && (c < a))
		return (true);
	return (false);
}
