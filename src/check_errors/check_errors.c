/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:15:40 by gjupy             #+#    #+#             */
/*   Updated: 2022/06/25 13:32:32 by gjupy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	parse_errors(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[++i])
	{
		if (argv[i][0] == '\0')
			print_error_1();
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0)
			{
				if (check_sign(argv, i, j) == false)
				{
					if (is_space(argv[i][j]) == false)
						print_error_1();
				}
			}
			j++;
		}
	}
	if (str_of_spaces(argv))
		print_error_1();
}

void	check_int_max_min(long nbr, t_list **stack, char **s, int j)
{
	if (nbr < INT_MIN || nbr > INT_MAX)
	{
		free(s[j]);
		print_error_2(stack);
	}
}

void	check_duplicates(t_list **stack)
{
	int	*array;
	int	len;
	int	i;
	int	j;
	int	nbr;

	i = -1;
	len = ft_lstsize(*stack);
	array = create_array_from_list(*stack, len);
	if (array == NULL)
		exit_failure(stack);
	while (++i < len)
	{
		nbr = array[i];
		j = -1;
		while (++j < len)
		{
			if (j != i && nbr == array[j])
			{
				free(array);
				print_error_2(stack);
			}
		}
	}
	free(array);
}
