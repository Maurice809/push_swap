/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:13:20 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/11 00:13:57 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(int *from, int *to, int *count_from, int *count_to)
{
	int	i;
	int	temp;

	i = -1;
	temp = from[0];
	while (++i < *count_from - 1)
		from[i] = from[i +1];
	i = *count_to + 1;
	while (--i > 0)
		to[i] = to[i -1];
	*count_from -= 1;
	*count_to += 1;
	to[0] = temp;
}

void	pa(t_state *state)
{
	if (state->b_count > 0)
	{
		push(state->b, state->a, &state->b_count, &state->a_count);
		ft_printf("pa\n");
	}
}

void	pb(t_state *state)
{
	if (state->a_count > 0)
	{
		push(state->a, state->b, &state->a_count, &state->b_count);
		ft_printf("pb\n");
	}
}
