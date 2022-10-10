/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:38:07 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/03 12:58:01 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(int *stack, int count)
{
	int	i;
	int	temp;

	i = -1;
	temp = stack[0];
	while (++i < count)
		stack[i] = stack[i +1];
	stack[count -1] = temp;
}

void	ra(t_state *state)
{
	rotate(state->a, state->a_count);
	ft_printf("ra\n");
}

void	rb(t_state *state)
{
	rotate(state->b, state->b_count);
	ft_printf("rb\n");
}

void	rr(t_state *state)
{
	rotate(state->a, state->a_count);
	rotate(state->b, state->b_count);
	ft_printf("rr\n");
}
