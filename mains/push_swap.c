/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:59:45 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/07 09:12:27 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push_swap(t_stack *a, t_stack *b)
{
	if (is_sorted(a->head) == TRUE)
		return ;
	algo(a, b);
}

static void	work(int count, char **av)
{
	t_stack *a;
	t_stack *b;
	int		*x;

	if (is_valid(count, av) == FALSE)
	{
		ft_putendl_fd("Error", 2);
	}
	else
	{
		b = stacknew(NULL, 0);
		a = stacknew(NULL, 0);
		x = (int *)malloc(sizeof(int));
		while (count >= 0)
		{
			*x = ft_atoi(av[count--]);
			stackpush(a, ft_lstnew(x, sizeof(x)));
		}
		free(x);
		push_swap(a, b);
		stackdel(&a);
		stackdel(&b);
	}
}

int			main(int ac, char **av)
{
	int		count;
	char	**split;

	if (ac > 1)
	{
		if (ac == 2)
		{
			count = 0;
			split = ft_strsplit(av[1], ' ');
			while (split[count] != '\0')
				count++;
			work(count - 1, split);
			free_split(split);
		}
		else
		{
			split = av + 1;
			work(ac - 2, split);
		}
	}
	return (0);
}
