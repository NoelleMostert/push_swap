/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:04:04 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/03 15:24:49 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "stack.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_flags
{
	int offset;
	int v;
}				t_flags;

void			swap_a(t_stack *a);
void			swap_b(t_stack *b);
void			swap_ab(t_stack *a, t_stack *b);
void			rot_a(t_stack *a);
void			rot_b(t_stack *b);
void			rot_ab(t_stack *a, t_stack *b);
void			revrot_a(t_stack *a);
void			revrot_b(t_stack *b);
void			revrot_ab(t_stack *a, t_stack *b);
void			push_a(t_stack *a, t_stack *b);
void			push_b(t_stack *a, t_stack *b);
void			contains_flags(int ac, char **av, t_flags *flags);
void			flag_check(t_flags *flag);
void			printstack(t_stack *a, t_stack *b, char *str);
void			displaystack(t_list *astart, t_list *bstart, t_list *aend, t_list *bend);
void			free_split(char **arr);
int				is_sorted(t_list *head);

#endif