/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_07.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:40:03 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/06 18:54:17 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_07(t_state *state)
{
	while (ft_checktri(state))
	{
		if (ft_fmin(state) == 0)
		{
			pb(state);
			ft_sort_06(state);
			pa(state);
		}
		if (ft_fmin(state) == 1)
			sa(state);
		if (ft_fmin(state) == 2)
		{
			ra(state);
			ra(state);
		}
		if (ft_fmin(state) == 3)
			rra(state);
		if (ft_fmin(state) == 4)
			rra(state);
		if (ft_fmin(state) == 5)
			rra(state);
		if (ft_fmin(state) == 6)
			rra(state);
	}
}
