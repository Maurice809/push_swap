/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmax_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:12:57 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/08 11:14:01 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_fmax_b(t_state *state)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i < state->b_count)
	{
		if (state->b[num] < state->b[i])
			num = i;
		i++;
	}
	return (num);
}
