/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:20:02 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/10 22:45:34 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(t_state *state)
{
	if (state->a_count == 2)
	{
		if (state->a[0] > state->a[1])
			ra(state);
	}
	if (state->a_count == 3)
		ft_sort_03(state);
	if (state->a_count == 4)
		ft_sort_04(state);
	if (state->a_count == 5)
		ft_sort_05(state);
	if (state->a_count == 6)
		ft_sort_06(state);
	if (state->a_count == 7)
		ft_sort_07(state);
	if (state->a_count == 8)
		ft_sort_08(state);
	if (state->a_count == 9)
		ft_sort_09(state);
	if (state->a_count == 10)
		ft_sort_10(state);
	if (state->a_count > 10)
		ft_sort_radix(state);
	return (0);
}
