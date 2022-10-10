/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_06.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:01:22 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/06 18:52:52 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_06(t_state *state)
{
	while (ft_checktri(state))
	{
		if (ft_fmin(state) == 0)
		{
			pb(state);
			ft_sort_05(state);
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
	}
}
