/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 23:04:26 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/04 14:42:47 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkps(t_state *state)
{
	char	str[4];

	ft_printstack(state);
	while (1)
	{
		printf("push_swap > ");
		scanf("%4s", str);
		if (strstr(str, "q"))
			return (0);
		ft_checkpsif(str, state);
		ft_printstack(state);
	}
}
