/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:02:37 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/06 17:14:21 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checktri(t_state *state)
{
	int	i;
	int	b;

	i = -1;
	b = -1;
	while (++i < state->a_count -1)
	{
		if (state->a[i] < state->a[i +1])
			++b;
	}
	if (b == state->a_count -2)
	{
		return (0);
	}
	else
		return (1);
}
