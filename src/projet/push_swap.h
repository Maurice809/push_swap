/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:42:25 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/10 15:15:52 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"
# include <stdio.h>
# include <errno.h>  
# include <limits.h> 

typedef struct state
{
	int	*a;
	int	a_count;
	int	*b;
	int	b_count;
}	t_state;

int		ft_checarg(char **argv);
int		ft_checsar(char **argv);
int		ft_checsar2(char **argv);
int		ft_str(char **table);
void	ft_opti_tab(t_state *state);
int		ft_error(int nbr);
int		ft_checinit(const char *str, int p);
void	ft_intmax(const char *str);
void	ft_intmin(const char *str);
int		ft_checdouble(char **argv);
void	ft_initstate(int argc, char **argv, t_state *state);
void	ft_printstack(t_state *state);

int		ft_fmin(t_state *state);
int		ft_fmin_b(t_state *state);
int		ft_fmax(t_state *state);
int		ft_fmax_b(t_state *state);

void	ra(t_state *state);
void	rb(t_state *state);
void	rr(t_state *state);

void	rra(t_state *state);
void	rrb(t_state *state);
void	rrr(t_state *state);

void	pa(t_state *state);
void	pb(t_state *state);

void	sa(t_state *state);
void	sb(t_state *state);
void	ss(t_state *state);

int		ft_sort(t_state *state);
void	ft_sort_03(t_state *state);
void	ft_sort_04(t_state *state);
void	ft_sort_05(t_state *state);
void	ft_sort_06(t_state *state);
void	ft_sort_07(t_state *state);
void	ft_sort_08(t_state *state);
void	ft_sort_09(t_state *state);
void	ft_sort_10(t_state *state);
void	ft_sort_00(t_state *state);
void	ft_sort_radix(t_state *state);
void	ft_sort_quick(t_state *state);

int		ft_checktri(t_state *state);

int		ft_checkps(t_state *state);
void	ft_checkpsif(char *str, t_state *state);
void	ft_checkpsif_03(char *str, t_state *state);
#endif
