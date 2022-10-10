/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkpsif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:04:47 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/03 12:56:34 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checkpsif(char *str, t_state *state)
{
	if (ft_strlen(str) == 3)
		ft_checkpsif_03(str, state);
	else
	{
		if (strstr(str, "ra"))
			ra(state);
		if (strstr(str, "rb"))
			rb(state);
		if (strstr(str, "rr"))
			rr(state);
		if (strstr(str, "pa"))
			pa(state);
		if (strstr(str, "pb"))
			pb(state);
		if (strstr(str, "sa"))
			sa(state);
		if (strstr(str, "sb"))
			sb(state);
		if (strstr(str, "ss"))
			ss(state);
	}
}
