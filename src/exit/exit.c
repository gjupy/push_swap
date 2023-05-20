/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:53:41 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/25 13:34:10 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	free_stack(t_list **stack)
{
	t_list	*tmp;

	if (stack)
	{
		while (*stack)
		{
			tmp = (*stack);
			*stack = tmp->next;
			free(tmp);
		}
	}
}

void	exit_failure(t_list **stack_a)
{
	free_stack(stack_a);
	exit(EXIT_FAILURE);
}

void	exit_success(t_list **stack_a)
{
	free_stack(stack_a);
	exit(EXIT_SUCCESS);
}
