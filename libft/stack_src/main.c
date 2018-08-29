/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:40:40 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/29 11:44:50 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stack.h"
#include "stdio.h"

int main (void)
{
	t_stack *stack;

	stack = newstack("random crap", 50);
	stack->head = newstack("more crap", 50);

