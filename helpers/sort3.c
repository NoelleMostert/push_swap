/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:32:48 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/06 17:08:44 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		messy(t_stack *a)
{
	int		count;
	int		x;
	int		y;
	int		z;

	x = *(int *)a->head->content;
	y = *(int *)a->head->next->content;
	z = *(int *)a->head->next->next->content;

	count = 0;
	if (x > y && y < z)
		count++;
	if (x > y && y < z && z > x)
		count++;
	return (count);
}

void	sort3(t_stack *a, t_stack *b)
{
	(void )b;
	if (is_sorted(a->head) == FALSE)
	{
		 if (is_revsorted(a->head))
		{
			swap_a(a);
			revrot_a(a);
		}
		else if (messy(a) == 1)
		{
			revrot_a(a);
			revrot_a(a);
		}
		else
			swap_a(a);

	}
}
