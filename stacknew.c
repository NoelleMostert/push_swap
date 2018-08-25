/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacknew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 14:57:55 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/24 16:06:09 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack *stacknew(const void *new, size_t content)
{
	t_stack *ret;

	if (ret = (t_stack *)malloc(sizeof(t_stack)) == NULL)
		return (NULL);
	if (new == NULL)
	{


}
