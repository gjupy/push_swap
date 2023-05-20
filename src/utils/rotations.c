/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:39:14 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/24 17:50:11 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Rotates over stack looking for the lowest->data element in stack while
taking the shortest route (depending on its position (index).
*/
void	rotate_to_min(t_list **stack, t_size *s)
{
	int		min;
	int		index;

	min = find_min(stack);
	index = get_index(stack, min);
	while (*stack && (*stack)->val != min)
	{
		if (index > (s->size_a / 2))
			rra(stack);
		else
			ra(stack);
	}
}
