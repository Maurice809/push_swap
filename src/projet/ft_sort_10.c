/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:32:37 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/06 20:41:19 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_10(t_state *state)
{
	while (ft_checktri(state))
	{
		if (ft_fmin(state) == 0)
		{
			pb(state);
			ft_sort_09(state);
			pa(state);
		}
		if (ft_fmin(state) == 1)
			sa(state);
		if (ft_fmin(state) >= 2 && ft_fmin(state) <= 4)
			ra(state);
		if (ft_fmin(state) > 4)
			rra(state);
	}
}
