/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotating.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:24:11 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/06 17:25:27 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rot_a(t_stack *a)
{
	if (a != NULL)
	{
		stackrot(a);
		ft_putendl("ra");
	}
}

void	rot_b(t_stack *b)
{
	if (b != NULL)
	{
		stackrot(b);
		ft_putendl("rb");
	}
}

void	double_rab(t_stack *a, t_stack *b)
{
	if (a != NULL)
		stackrot(a);
	if (b != NULL)
		stackrot(b);
	ft_putendl("rr");
}

void	rot_ab(t_stack *a, t_stack *b)
{
	double_rab(a, b);
}
