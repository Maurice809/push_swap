/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initmax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:39:54 by tmoret            #+#    #+#             */
/*   Updated: 2022/09/26 21:40:25 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_intmax(const char *str)
{
	if (str[0] > '2')
		ft_error(1);
	else if (str[1] > '1')
		ft_error(1);
	else if (str[2] > '4')
		ft_error(1);
	else if (str[3] > '7')
		ft_error(1);
	else if (str[4] > '4')
		ft_error(1);
	else if (str[5] > '8')
		ft_error(1);
	else if (str[6] > '3')
		ft_error(1);
	else if (str[7] > '6')
		ft_error(1);
	else if (str[8] > '4')
		ft_error(1);
	else if (str[9] > '7')
		ft_error(1);
}
