/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:57:07 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/25 13:33:09 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

// # define malloc(...) NULL

typedef struct s_size
{
	int	size_og;
	int	size_a;
	int	size_b;
}	t_size;

// errors

void	parse_errors(int argc, char **argv);
void	print_error_1(void);
void	print_error_2(t_list **stack);
void	check_int_max_min(long nbr, t_list **stack, char **s, int j);
bool	is_space(char c);
bool	str_of_spaces(char **argv);
bool	check_sign(char **s, int i, int j);
int		*create_array_from_list(t_list *stack, int len);
void	check_duplicates(t_list **stack);

// exits

void	exit_failure(t_list **stack_a);
void	exit_success(t_list **stack_a);

// stack

t_list	*stack_push(int nbr, t_list **stack_a);
void	init_stack(char **argv, t_list **stack_a, t_list **stack_b, t_size *s);

// operations

void	pa(t_list **stack_a, t_list **stack_b, t_size *s);
void	pb(t_list **stack_a, t_list **stack_b, t_size *s);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rr(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack);
void	sb(t_list **stack);
void	ss(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	rrr(t_list **stack_a, t_list **stack_b);

// sort

void	init_sort(t_list **stack_a, t_list **stack_b, t_size *s);
void	sort_three_nbrs(t_list **stack, t_size *s);
void	sort_five_nbrs(t_list **stack_a, t_list **stack_b, t_size *s);
bool	case_zero(t_list *stack, t_size *s);
bool	case_one(t_list *stack);
bool	case_two(t_list *stack);
bool	case_three(t_list *stack);
bool	case_four(t_list *stack);
bool	case_five(t_list *stack);
void	sort_big(t_list **stack_a, t_list **stack_b, t_size *s);
void	push_chunks(t_list **stack_a, t_list **stack_b, t_size *s);

// utils

void	rotate_to_min(t_list **stack, t_size *s);
void	set_index(t_list **stack_a, t_list **stack_b);
int		get_index(t_list **stack, int value);
int		find_min(t_list **stack);
void	set_rank(t_list **stack_a, t_list *current);
void	set_rankloop(t_list *stack_a);
int		find_max_rank(t_list **stack);
int		find_min_rank(t_list **stack);
int		find_max_val(t_list **stack);
void	print_stack(t_list *stack);

#endif