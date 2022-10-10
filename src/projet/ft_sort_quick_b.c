/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_quick_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:15:00 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/09 10:14:04 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*static void	ft_tria(t_state *state)
{
	int	n;

	n = state->b_count;
	while (n-- > 0)
	{
		if (state->b[ft_fmax_b(state)] == state->b[1]
			&& state->b[ft_fmax_b(state)] == state->b[0])
		{
			pa(state);
			n-- ;
			pa(state);
			n-- ;
		}
		if (state->b[ft_fmax_b(state)] == state->b[0])
		{
//			if (state->b[ft_fmax_b(state)] == state->b[1])
  //          {
    //            sb(state);
      //          pa(state);
		//		n-- ;
          //  }
			pa(state);
			n = 0;
		}
		else
			rb(state);
	}
}*/

static void   ft_tria(t_state *state)
{
	while (state->b[ft_fmax_b(state)] != state->b[0])
		rb(state);
	if (state->b[ft_fmax_b(state)] == state->b[0])
		pa(state);

}

/*
static void	ft_trib(t_state *state)
{
	int	n;

	n = state->b_count;
	while (n-- > 0)
	{
		if (state->b[ft_fmax_b(state)] == state->b[1]
			&& state->b[ft_fmax_b(state)] == state->b[0])
		{
			pa(state);
			n-- ;
			pa(state);
			n-- ;
		}
		if (state->b[ft_fmax_b(state)] == state->b[0])
		{
			pa(state);
//			if (state->b[ft_fmax_b(state)] == state->b[1])
  //          {
    //            sb(state);
      //          pa(state);
		//		n-- ;
          //  }
			n = 0;
		}
		else
			rrb(state);
	}
}
*/

static void ft_trib(t_state *state)
{
	while (state->b[ft_fmax_b(state)] != state->b[0])
		rrb(state);
	if (state->b[ft_fmax_b(state)] != state->b[0])
		pa(state);


}

void	ft_sort_quick_b(t_state *state)
{
	while (state->b_count > 0)
	{
		if (state->b[ft_fmax_b(state)] == state->b[0])
			pa(state);
		if (ft_fmax_b(state) < state->b_count / 2)
			ft_tria(state);
		else
			ft_trib(state);
	}
}
