/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peek.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 14:34:10 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/24 14:57:44 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int	peek(t_stack *s)
{
	if(is_empty(s))
		return 