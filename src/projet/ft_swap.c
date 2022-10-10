/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:22:41 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/04 14:40:59 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int *stack, int count)
{
	int	temp;

	if (count > 1)
	{
		temp = stack[0];
		stack[0] = stack[1];
		stack[1] = temp;
	}
}

void	sa(t_state *state)
{
	swap(state->a, state->a_count);
	ft_printf("sa\n");
}

void	sb(t_state *state)
{
	swap(state->b, state->b_count);
	ft_printf("sb\n");
}

void	ss(t_state *state)
{
	swap(state->a, state->a_count);
	swap(state->b, state->b_count);
	ft_printf("ss\n");
}
