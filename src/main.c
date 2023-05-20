/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:09:04 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/25 14:45:44 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_size	size;

	if (argc > 1)
	{
		stack_a = NULL;
		stack_b = NULL;
		parse_errors(argc, argv);
		init_stack(argv, &stack_a, &stack_b, &size);
		init_sort(&stack_a, &stack_b, &size);
		exit_success(&stack_a);
	}
	return (0);
}
