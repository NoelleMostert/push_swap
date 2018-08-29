/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackdel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 16:06:30 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/29 15:33:37 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

void	stackdel(t_stack **s)
{
	t_list *tmp;
	t_list *prev;

	if (*s != NULL || s != NULL || s[0] != NULL)
	{
		tmp = s[0]->head;
		while (tmp != NULL)
		{
			prev = tmp;
			tmp = tmp->next;
			ft_memdel((void **)&prev->content);
			ft_memdel((void **)&prev);
		}
	}
	ft_memdel((void **)s);
}
