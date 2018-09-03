/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackrevrot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 10:49:39 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/03 11:23:45 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

void	stackrevrot(t_stack *s)
{
	t_stack *a;
	t_list	*end;

	if (isempty(s) == FALSE)
	{
		a = stacknew(NULL, 0);
		while (s->size > 1)
			stackpush(a, stackpop(s));
		end = stackpop(s);
		while (isempty(a) == FALSE)
			stackpush(s, stackpop(a));
		stackpush(s, end);
		stackdel(&a);
	}
}
