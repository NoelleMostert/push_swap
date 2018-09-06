/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:02:22 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/06 12:28:02 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	move(t_stack *a, t_stack *b, char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		swap_a(a);
	else if (ft_strcmp(str, "sb") == 0)
		swap_b(b);
	else if (ft_strcmp(str, "ss") == 0)
		swap_ab(a, b);
	else if (ft_strcmp(str, "pa") == 0)
		push_a(a, b);
	else if (ft_strcmp(str, "pb") == 0)
		push_b(a, b);
	else if (ft_strcmp(str, "ra") == 0)
		rot_a(a);
}

static void	readdo(t_stack *a, t_stack *b, t_flags *f)
{
	char	*str;
	int		read_ret;
	while ((read_ret = get_next_line(0, &str)) > 0)
	{
		move(a, b, str);
		if (ft_strcmp(str, "rb") == 0)
			rot_b(b);
		else if (ft_strcmp(str, "rr") == 0)
			rot_ab(a, b);
		else if (ft_strcmp(str, "rra") == 0)
			revrot_a(a);
		else if (ft_strcmp(str, "rrb") == 0)
			revrot_b(b);
		else if (ft_strcmp(str, "rrr") == 0)
			revrot_ab(a, b);
		else if (ft_strcmp(str, "quit") == 0)
		{
			ft_strdel(&str);
			break ;
		}
		if (f->v == 1)
		{
			ft_putendl(str);
			printstack(a, b, str);
		}
		free(str);
	}
	if (str != NULL)
		ft_strdel(&str);
}

static int	work(int count, char **av, t_stack *a)
{
	int		*x;

	if (is_valid(count, av) == FALSE)
	{
		ft_putendl_fd("Error", 2);
		return (0);
	}
	else
	{
		x = (int *)malloc(sizeof(int));
		while (count >= 0)
		{
			*x = ft_atoi(av[count--]);
			stackpush(a, ft_lstnew(x, sizeof(x)));
		}
		free(x);
	}
	return (1);
}

static int	parse_content(int ac, char **av, t_flags *flag, t_stack *a)
{
	int		count;
	char	**split;

	if (ac == 2 + flag->offset)
	{
		count = 0;
		split = ft_strsplit(av[1 + flag->offset], ' ');
		while (split[count] != '\0')
			count++;
		if (work(count - 1, split, a) == 0)
			return (0);
		free_split(split);
	}
	else
	{
		split = av + 1 + flag->offset;
		if (work(ac - 2 - flag->offset, split, a) == 0)
			return (0);
	}
	return (1);
}

int			main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	t_flags	flag;

	if (ac > 1)
	{
		b = stacknew(NULL, 0);
		a = stacknew(NULL, 0);
		flag.v = 0;
		flag.c = 0;
		contains_flags(ac - 1, av, &flag);
		flag_check(&flag);
		if (parse_content(ac, av, &flag, a) == 0)
			return (0);
		if (a->head == NULL)
			ft_putstr("null head\n");
		readdo(a, b, &flag);
		if (a->head != NULL && is_sorted(a->head) && isempty(b) == TRUE)
			ft_putendl("OK");
		else
			ft_putendl("KO");
		stackdel(&a);
		stackdel(&b);
	}
	return (0);
}
