/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_09.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:41:12 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/06 20:56:18 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_09(t_state *state)
{
	while (ft_checktri(state))
	{
		if (ft_fmin(state) == 0)
		{
			pb(state);
			ft_sort_08(state);
			pa(state);
		}
		if (ft_fmin(state) == 1)
			sa(state);
		if (ft_fmin(state) >= 2 && ft_fmin(state) <= 3)
			ra(state);
		if (ft_fmin(state) > 3)
			rra(state);
	}
}
