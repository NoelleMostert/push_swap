/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:53:31 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/06 08:35:19 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	displaystack(t_list *astart, t_list *bstart, t_list *aend, t_list *bend)
{
	while (astart != aend || bstart != bend)
	{
		if (astart != aend)
		{
			ft_putnbr_fd(*(int *)astart->content, 1);
			ft_putchar_fd('\t', 1);
			astart = astart->next;
		}
		else
			ft_putstr_fd("--\t", 1);
		if (bstart != bend)
		{
			ft_putnbr_fd(*(int *)bstart->content, 1);
			ft_putchar_fd('\n', 1);
			bstart = bstart->next;
		}
		else
			ft_putstr_fd("--\n", 1);
	}
	ft_putstr_fd("--\t--\nA\tB\n", 1);
}

void	printstack(t_stack *a, t_stack *b, char *str)
{
	t_list *ahead;
	t_list *bhead;

	ahead = peek(a);
	bhead = peek(b);
	if (strcmp(str, "sa") == 0 || strcmp(str, "sb") == 0 || strcmp(str, "ss")
			== 0 || strcmp(str, "pa") == 0 || strcmp(str, "pb") == 0 ||
			strcmp(str, "ra") == 0 || strcmp(str, "rb") == 0 ||
			strcmp(str, "rrr") == 0 || strcmp(str, "rra") == 0 ||
			strcmp(str, "rrb") == 0 || strcmp(str, "rrr") == 0)
		displaystack(ahead, bhead, NULL, NULL);
	else
		ft_putstr_clr(RED, "Invalid move selected\n");
}
