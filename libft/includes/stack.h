/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 14:08:33 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/30 16:09:02 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# define TRUE 1
# define FALSE 0
# include "libft.h"

typedef struct	s_stack
{
	size_t size;
	t_list *head;
}				t_stack;

int				isempty(t_stack *s);
t_stack			*stacknew(const void *content, size_t content_size);
t_list			*peek(t_stack *s);
t_list			*stackpop(t_stack *s);
void			stackpush(t_stack *s, t_list *elem);
void			stackrot(t_stack *s);
void			stackrevrot(t_stack *s);
void			stackdel(t_stack **s);
void			stackswap(t_stack *s);

#endif
