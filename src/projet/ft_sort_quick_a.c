/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_quick_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 05:38:34 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/09 18:38:45 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_quick_a(t_state *state)
{
	int			b;
	int			n;
	static int	k;

	while (state->a_count > 10)
	{
		b = state->a[state->a_count / 2];
		if (b == k || b == state->a[ft_fmin(state)])
			b++ ;
		n = state->a_count;
		while (n-- > 0)
		{
			if (state->a[0] < b)
				pb(state);
			else
				ra(state);
		}
//		k = b;
	}
/*	k = state->b_count / 4;
	while (state->b_count > k)
	{
		while (state->b[ft_fmax_b(state)] != state->b[0])
        rb(state);
    if (state->b[ft_fmax_b(state)] == state->b[0])
        pa(state);
	} */
}
