/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:40:48 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/07 02:05:26 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_03(t_state *state)
{
	int	max;
	int	min;

	max = ft_fmax(state);
	min = ft_fmin(state);
	if (max == 0 && min == 2)
	{
		ra(state);
		sa(state);
	}
	else if (max == 1 && min == 2)
		rra(state);
	else if (max == 0 && min == 1)
		ra(state);
	else if (max == 1 && min == 0)
	{
		rra(state);
		sa(state);
	}
	else if (max == 1 && min == 0)
		sa(state);
	else if (max == 2 && min == 1)
		sa(state);
}
