/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checarg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:17:04 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/05 16:46:36 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checsar(char **argv)
{
	if (argv[0][0] == '.' || argv[0][0] == '/')
		return (0);
	else
		return (-1);
}

int	ft_checarg(char **argv)
{
	int	i;
	int	o;
	int	p;

	i = ft_checsar(argv);
	while (argv[++i])
	{
		o = -1;
		p = -1;
		while (argv[i][++o])
		{
			if ((argv[i][0] == '0' && argv[i][1] >= '0') ||
					(argv[i][0] == '-' && argv[i][1] == '0'))
				ft_error(1);
			if (argv[i][o] == '-' && o == 0)
				++o;
			if (!ft_isdigit((int)argv[i][o]))
				ft_error(1);
			else if (++p > 8)
				ft_checinit(argv[i], p);
		}
	}
	ft_checdouble(argv);
	return (0);
}
