/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacknew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 14:57:55 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/03 11:22:59 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

t_stack	*stacknew(const void *content, size_t content_size)
{
	t_stack *ret;

	if ((ret = (t_stack *)malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	if (content != NULL)
	{
		ret->head = ft_lstnew(content, content_size);
		ret->size = 1;
	}
	else
	{
		ret->head = NULL;
		ret->size = 0;
	}
	return (ret);
}
