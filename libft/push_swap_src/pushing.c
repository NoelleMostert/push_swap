/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:44:28 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/30 09:49:25 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *a, t_stack *b)
{
	if (isempty(b) == FALSE)
		stackpush(a, stackpop(b))
}

void	push_b(t_stack *a, t_stack *b)
{
	if (isempty(a) == FALSE)
		stackpush(b, stackpop(a))
}
