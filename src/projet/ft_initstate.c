/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initstate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:24:09 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/11 00:24:19 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checsar2(char **argv)
{
	if (argv[0][0] == '.' || argv[0][0] == '/')
		return (1);
	else
		return (0);
}

void	ft_initstate(int argc, char **argv, t_state *state)
{
	int	i;
	int	k;

	ft_checarg(argv);
	i = ft_checsar(argv);
	k = ft_checsar2(argv);
	state->a = malloc((argc - k) * sizeof(int));
	if (!state->a)
		ft_error(1);
	state->b = malloc((argc - k) * sizeof(int));
	if (!state->b)
		ft_error(1);
	while (argv[++i])
	{
			state->a[i - k] = ft_atoi(argv[i]);
	}
	state->a_count = i - k;
	state->b_count = 0;
	ft_opti_tab(state);
	ft_sort(state);
}
