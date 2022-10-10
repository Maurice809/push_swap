/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checinit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:07:15 by Maurice809        #+#    #+#             */
/*   Updated: 2022/09/26 21:44:14 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checinit(const char *str, int p)
{
	if (p > 9)
		ft_error(1);
	else if (str[0] == '-')
		ft_intmin(str);
	else
		ft_intmax(str);
	return (0);
}
