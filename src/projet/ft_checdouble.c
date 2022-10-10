/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checdouble.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 22:36:36 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/06 14:26:57 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checdouble(char **argv)
{
	int	i;
	int	p;
	int	k;

	i = ft_checsar(argv);
	p = 1;
	k = 0;
	while (argv[++i])
	{
		while (argv[++p])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[p]))
				ft_error(1);
			if (ft_atoi(argv[i]) > ft_atoi(argv[p]))
				++k;
		}
		p = i +1;
	}
	if (k == 0)
		ft_error(2);
	return (0);
}
