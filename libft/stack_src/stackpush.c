/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackpush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 14:49:15 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/27 16:59:01 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	*stackpush(t_stack *s, t_list *elem)
{
	if (s != NULL)
	{
		if (s->head != NULL)
			ft_lstadd(&s->head, elem);
		else
		{
			ft_lstnew(elem->content, elem->content_size);
			s->size += 1;
		}
	}
}