/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:21:36 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/06 14:38:50 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printstack(t_state *state)
{
	int	i;
	int	s;
	int	min;
	int	max;

	i = -1;
	max = ft_fmax(state);
	min = ft_fmin(state);
	s = state->a_count + state->b_count;
	if (state->a_count > state->b_count)
		s = s - state->b_count;
	else
		s = s - state->a_count;
	ft_printf("----------------------------\n");
	ft_printf("Stack A: %i\tStact B: %i\n", state->a_count, state->b_count);
	ft_printf("Max : %i\tMin : %i\n", max, min);
	ft_printf("----------------------------\n");
	while (++i < s)
	{
		if (i > 9)
			ft_printf("Pos : %i\t %i\t %i\n", i, state->a[i], state->b[i]);
		else
			ft_printf("Pos : %i\t\t %i\t %i\n", i, state->a[i], state->b[i]);
	}
	ft_printf("----------------------------\n");
}
