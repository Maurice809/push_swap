/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:08:09 by Maurice809        #+#    #+#             */
/*   Updated: 2022/09/30 13:12:29 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_fmax(t_state *state)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i < state->a_count)
	{
		if (state->a[num] < state->a[i])
			num = i;
		i++;
	}
	return (num);
}
