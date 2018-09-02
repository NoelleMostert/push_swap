/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 12:02:14 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/01 14:18:01 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stack.h>
#include <stdio.h>

int main(int ac, char *av[])
{
	int tmp;
	int *x;
	t_stack *a;
	t_list *head;

	if (ac > 1)
	{
		printf("I am in my main\n");
		x = (int *)malloc(sizeof(int));
		a = stacknew(NULL, 0);
		tmp = ac -1;
		while (tmp > 0)
		{
			*x = ft_atoi(av[tmp--]);
			stackpush(a, ft_lstnew(x, sizeof(x)));
		}
		head = peek(a);
		if (head == NULL)
			printf("there was nothing pushed to my stack");
		else
			printf("heres the stack without any functions applied\n");
		while(head != NULL)
		{
			x = (int *)head->content;
			printf("%d\n", *x);
			head = head->next;
		}
		printf("heres the stack after stackrotate\n");
		stackrot(a);
		head = peek(a);
		while(head != NULL)
		{
			x = (int *)head->content;
			printf("%d\n", *x);
			head = head->next;
		}
		printf("heres the stack after stackrevrot\n");
		stackrevrot(a);
		head = peek(a);
		while(head != NULL)
		{
			x = (int *)head->content;
			printf("%d\n", *x);
			head = head->next;
		}
//		printf("heres the stack after ft_stack_swap_top\n");
//		ft_stack_swap_top(a);
//		head = ft_stacktop(a);
//		while(head != NULL)
//		{
//			x = (int *)head->content;
//			printf("%d\n", *x);
//			head = head->next;
//		}
		/*
		printf("Here is the max of the struct\n");
		head = ft_stackmax(a, &int_cmp);
		x = (int *)head->content;
		printf("%d\n", *x);*/
		printf("Deleting the stack\n");
		stackdel(&a);
	}
}
