/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:08:29 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/30 09:35:58 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *a)
{
	if (a != NULL)
		stackswap(a);
}

void	swap_b(t_stack *b)
{
	if (b != NULL)
		stackswap(b);
}

void swap_ab(t_stack *a, t_stack *b)
{
		swap_a(a);
		swap_b(b);
}
