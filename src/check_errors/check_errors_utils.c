/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:33:29 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/25 13:24:22 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	*create_array_from_list(t_list *stack, int len)
{
	int		*array;
	int		i;

	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		array[i] = stack->val;
		stack = stack->next;
		i++;
	}
	return (array);
}

bool	is_space(char c)
{
	if (c == ' ')
		return (true);
	return (false);
}

bool	str_of_spaces(char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while (argv[i][j])
		{
			while (is_space(argv[i][j]))
				j++;
			if (argv[i][j] != '\0')
				break ;
			else if (argv[i][j] == '\0')
				return (true);
			j++;
		}
	}
	return (false);
}

bool	check_sign(char **s, int i, int j)
{
	if (s[i][j] == '-')
	{
		if (is_space(s[i][j - 1]) || j == 0)
		{
			if (s[i][j + 1] && ft_isdigit(s[i][j + 1]))
				return (true);
		}
		else
			print_error_1();
	}
	return (false);
}
