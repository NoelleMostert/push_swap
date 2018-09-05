/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackindex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:57:32 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/05 13:59:17 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

int	ft_stack_indexof(t_stack *s, t_list *elem)
{
	int		count;
	t_list	*tmp;

	count = 0;
	if (s != NULL && s->head != NULL)
	{
		tmp = s->head;
		while (tmp != NULL)
		{
			if (ft_memcmp(tmp->content, elem->content, elem->content_size) == 0)
				return (count);
			count++;
			tmp = tmp->next;
		}
	}
	return (-1);
}
