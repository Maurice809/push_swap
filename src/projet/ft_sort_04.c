/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:06:27 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/06 18:02:19 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_04(t_state *state)
{
	int	min;

	while (ft_checktri(state))
	{
		min = ft_fmin(state);
		if (min == 0)
		{
			pb(state);
			ft_sort_03(state);
			pa(state);
		}
		if (min == 1)
			sa(state);
		if (min == 2)
		{
			rra(state);
			rra(state);
		}
		if (min == 3)
			rra(state);
	}
}
