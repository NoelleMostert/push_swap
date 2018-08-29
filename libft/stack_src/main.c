/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:40:40 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/29 15:54:10 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stack.h>
#include <stdio.h>

int main (void)
{
	t_stack *stack;
	t_list	*tmp;

	stack = stacknew("random crap", 50);
	//stack->head = newstack("more crap", 50);
	stackpush(stack, ft_lstnew("av", 10));
	stackpush(stack, ft_lstnew("ab", 10));

	tmp = peek(stack);
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("%s\n", (char *)peek(stack)->content);
}
