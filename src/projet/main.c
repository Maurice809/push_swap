/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:38:25 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/07 02:55:29 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**table;
	t_state	state;

	i = -1;
	state = (t_state){0};
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		table = ft_split(argv[1], ' ');
		if (!table)
			ft_error(1);
		ft_initstate(ft_str(table), table, &state);
		while (table[++i])
			free(table[i]);
		free(table);
	}
	else
		ft_initstate(argc, argv, &state);
	free(state.a);
	free(state.b);
}
