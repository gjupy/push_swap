/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:40:17 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/25 14:51:24 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*stack_push(int nbr, t_list **stack_a)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		exit_failure(stack_a);
	new_node->val = nbr;
	new_node->next = NULL;
	return (new_node);
}

static void	split_and_push(char **argv, t_list **stack_a, t_list **stack_b)
{
	char	**s;
	int		i;
	int		j;

	i = 0;
	while (argv[++i])
	{
		s = ft_split(argv[i], ' ');
		if (!s)
			exit_failure(stack_a);
		j = -1;
		while (s[++j])
		{
			check_int_max_min(ft_atoi_long(s[j]), stack_a, s, j);
			ft_lstadd_back(stack_a, stack_push(ft_atoi(s[j]),
					stack_a));
			free(s[j]);
		}
		free(s);
	}
}

void	init_stack(char **argv, t_list **stack_a, t_list **stack_b, t_size *s)
{
	split_and_push(argv, stack_a, stack_b);
	check_duplicates(stack_a);
	s->size_a = ft_lstsize(*stack_a);
	s->size_og = s->size_a;
	s->size_b = 0;
}
