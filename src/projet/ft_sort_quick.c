/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_quick.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 07:20:22 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/10 10:51:10 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_quick(t_state *state)
{
	ft_sort_quick_a(state);
	ft_sort(state);
	ft_sort_quick_b(state);
//	ft_checkps(state);
}
