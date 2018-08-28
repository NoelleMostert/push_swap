/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackrot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 16:15:26 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/28 16:21:52 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stackrot(t_stack *s)
{
	t_stack *a;
	t_list *head;

	if (isempty(s) == FALSE)
	{
		head = stackpop(s);
		a = newstack(NULL, 0);
		while (isempty(s) == FALSE)
			stackpush(a, stackpop(s));
		stackpush(s, head);
		while (isempty(a) == FALSE)
			stackpush(s, stackpop(a));
		stackdel(&a);
	}
}

