/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackmin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:46:42 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/04 16:46:52 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_list	*stackmin(t_stack *s)
{
	t_list *tmp;
	t_list *ret;

	ret = NULL;
	if (s != NULL)
	{
		tmp = s->head;
		ret = tmp;
		while (tmp != NULL)
		{
			if (*((int *)tmp->content) < *((int *)ret->content))
				ret = tmp;
			tmp = tmp->next;
		}
	}
	return (ret);
}
