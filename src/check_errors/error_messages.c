/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_messages.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:29:11 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/25 13:28:50 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_error_1(void)
{
	ft_print_str("\033[31mERROR\033[0m\n");
	exit(EXIT_FAILURE);
}

void	print_error_2(t_list **stack)
{
	ft_print_str("\033[31mERROR\033[0m\n");
	exit_failure(stack);
}
