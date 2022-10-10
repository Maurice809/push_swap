/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:39:31 by tmoret            #+#    #+#             */
/*   Updated: 2022/09/26 21:42:59 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_intmin(const char *str)
{
	if (str[1] > '2')
		ft_error(1);
	else if (str[2] > '1')
		ft_error(1);
	else if (str[3] > '4')
		ft_error(1);
	else if (str[4] > '7')
		ft_error(1);
	else if (str[5] > '4')
		ft_error(1);
	else if (str[6] > '8')
		ft_error(1);
	else if (str[7] > '3')
		ft_error(1);
	else if (str[8] > '6')
		ft_error(1);
	else if (str[9] > '4')
		ft_error(1);
	else if (str[10] > '8')
		ft_error(1);
}
