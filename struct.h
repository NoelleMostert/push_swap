/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 14:08:33 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/24 16:10:31 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H
# define TRUE 1
# define FALSE 0
# include "libft.h"

typedef struct	t_stack
{
	size_t size;
	t_list *head;
}				s_stack;

int				isempty(t_stack *s);
