/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackswap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:19:39 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/29 15:34:31 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

void	stackswap(t_stack *s)
{
	t_list *one;
	t_list *two;

	if (s != NULL && s->size > 1)
	{
		one = stackpop(s);
		two = stackpop(s);
		stackpush(s, one);
		stackpush(s, two);
	}
}
