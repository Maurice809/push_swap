/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:17:40 by Maurice809        #+#    #+#             */
/*   Updated: 2022/09/30 13:21:14 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_fmin(t_state *state)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i < state->a_count)
	{
		if (state->a[num] > state->a[i])
			num = i;
		i++;
	}
	return (num);
}
