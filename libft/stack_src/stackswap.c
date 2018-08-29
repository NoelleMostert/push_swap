/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackswap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:19:39 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/29 11:29:54 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stackswap(t_stack *s)
{
	t_stack *one;
	t_stack *two;

	if (s != NULL && s->size > 1)
	{
		one = stackpop(s);
		two = stackpop(s);
		stackpush(s, one);
		stackpush(s, two);
	}
}
