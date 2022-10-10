/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_radix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:59:02 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/10 14:00:31 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	ft_check_sort_stack_a(t_state *state)
{
	int	i;
	int	j;

	i = 0;
	while (i < state->a_count - 1)
	{
		j = i + 1;
		if (state->a[i] < state->a[j])
			i++;
		else
			return (0);
	}
	return (1);
}

void	ft_sort_radix(t_state *state)
{
	int	size;
	int	i;
	int	j;
	int	max;

	i = 0 ;
	max = state->a[ft_fmax(state)];
	size = state->a_count;
	while (i < max)
	{
		j = 0;
		while (j < size && !ft_check_sort_stack_a(state))
		{
			if ((state->a[0] >> i) & 1)
				ra(state);
			else
				pb(state);
			j++;
		}
		i++;
		while (state->b_count)
			pa(state);
	}
}
