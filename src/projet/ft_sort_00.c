/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 06:17:57 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/07 06:26:04 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_00(t_state *state)
{
	if (state->a_count == 2)
		ra(state);
	if (state->a_count == 3)
		ft_sort_03(state);
	if (state->a_count == 4)
		ft_sort_04(state);
	if (state->a_count == 5)
		ft_sort_05(state);
	if (state->a_count == 6)
		ft_sort_06(state);
	if (state->a_count == 7)
		ft_sort_07(state);
	if (state->a_count == 8)
		ft_sort_08(state);
	if (state->a_count == 9)
		ft_sort_09(state);
	if (state->a_count == 10)
		ft_sort_10(state);
}
