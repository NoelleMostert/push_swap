/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:04:04 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/30 09:37:13 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "stack.h"

void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	swap_ab(t_stack *a. t_stack *b);
void	rot_a(t_stack *a);
void	rot_b(t_stack *b);
void	rot_ab(t_stack *a, t_stack *b);
void	revrot_a(t_stack *a);
void	revrot_b(t_stack *b);
void	revrot_ab(t_stack *a, t_stack *b);

