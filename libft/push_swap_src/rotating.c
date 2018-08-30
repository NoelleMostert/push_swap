/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotating.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:24:11 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/30 09:35:24 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	rot_a(t_stack *a)
{
	if (a != NULL)
		stackrot(a);
}

void	rot_b(t_stack *b)
{
	if (b != NULL)
		stackrot(b);
}

void	rot_ab(t_stack *a, t_stack *b)
{
		rot_a(a);
		rot_b(b);
}

void	revrot_a(t_stack *a)
{
	if (a != NULL)
		stackrevrot(a);
}

void	revrot_b(t_stack *b)
{
	if (b != NULL)
		stackrevrot(b);
}

void	rot_ab(t_stack *a, t_stack *b)
{
		revrot_a(a);
		revrot_b(b);
}
