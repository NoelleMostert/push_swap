/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 10:29:01 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/06 17:07:57 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo(t_stack *a, t_stack *b)
{
	t_list	*tmp;

	while ((int )a->size > 3)
	{
		tmp = stackmin(a);
		if ((stackindex(a, tmp)) > (int)  a->size / 2)
			while (*(int *)peek(a)->content != *(int *)tmp->content)
				revrot_a(a);
		else if (*(int  *)peek(a)->next->content == *(int *)tmp->content)
				swap_a(a);
		while (*(int *)a->head->content != *(int *)tmp->content)
			rot_a(a);
		push_b(a, b);
	}
	if (a->size <= 3 && is_sorted(a->head) == FALSE)
	{
		if (a->size == 2)
			swap_a(a);
		else
			sort3(a, b);
	}
	while (b->size != 0)
		push_a(a, b);
}
