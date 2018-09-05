/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 10:29:01 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/05 15:44:40 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo(t_stack *a, t_stack *b)
{
	char *tmp;
	int i;

	tmp = stackmin(a);
	while (a->size > 3)
	{
		tmp = stackmin(a);
		i = stackindex(a);
		if(i > a->size / 2)
		{
			while (peek(a) != tmp)
			{
				revrot_a(a);
			}
		}
		else
		{
			while (a != stackmin(a))
				rot_a(a);
		}
		push_b(a, b);
	}
	if (a->size == 3 && is_sorted(a) == FALSE)
	{
		//sort_3 function here;
	}
	while (b != is_empty(b))
	{
		push_a(a, b);
	}
}
