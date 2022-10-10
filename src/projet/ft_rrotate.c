/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:59:19 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/11 00:05:25 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(int *stack, int count)
{
	int	i;
	int	temp;

	i = count + 1;
	temp = stack[count -1];
	while (--i > 0)
		stack[i] = stack[i -1];
	stack[0] = temp;
}

void	rra(t_state *state)
{
	reverse_rotate(state->a, state->a_count);
	ft_printf("rra\n");
}

void	rrb(t_state *state)
{
	reverse_rotate(state->b, state->b_count);
	ft_printf("rrb\n");
}

void	rrr(t_state *state)
{
	reverse_rotate(state->a, state->a_count);
	reverse_rotate(state->b, state->b_count);
	ft_printf("rrr\n");
}
