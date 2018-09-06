/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:08:29 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/06 17:24:38 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_stack *a)
{
	if (a != NULL)
	{
		stackswap(a);
		ft_putendl("sa");
	}
}

void	swap_b(t_stack *b)
{
	if (b != NULL)
	{
		stackswap(b);
		ft_putendl("sb");
	}
}

void	swapboth(t_stack *a, t_stack *b)
{
	if (a != NULL)
		swap_a(a);
	if (b != NULL)
		swap_b(b);
	ft_putendl("ss");
}
void	swap_ab(t_stack *a, t_stack *b)
{
	swapboth(a, b);
}
