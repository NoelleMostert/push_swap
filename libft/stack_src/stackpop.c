/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackpop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 14:02:03 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/27 14:45:06 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_list	*stackpop(t_stack *s)
{
	t_list *tmp;

	tmp = NULL;

	if (s != NULL)
	{
		tmp = s->head;
		if (s->head != NULL)
		{
			s->head = tmp->next;
			tmp->size -= 1;
		}
	}
	return (tmp);
}
