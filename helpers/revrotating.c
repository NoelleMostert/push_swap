/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotating.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:15:58 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/06 17:16:41 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	revrot_a(t_stack *a)
{
	if (a != NULL)
	{
		stackrevrot(a);
		ft_putendl("rra");
	}
}

void	revrot_b(t_stack *b)
{
	if (b != NULL)
	{
		stackrevrot(b);
		ft_putendl("rrb");
	}
}

void	double_revrab(t_stack *a, t_stack *b)
{
	if (a != NULL)
		stackrevrot(a);
	if (b != NULL)
		stackrevrot(b);
	ft_putendl("rrr");
}

void	revrot_ab(t_stack *a, t_stack *b)
{
	double_revrab(a, b);
}
