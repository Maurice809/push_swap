/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkpsif_03.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:05:10 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/03 11:09:16 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checkpsif_03(char *str, t_state *state)
{
	if (strstr(str, "rra"))
		rra(state);
	if (strstr(str, "rrb"))
		rrb(state);
	if (strstr(str, "rrr"))
		rrr(state);
}
