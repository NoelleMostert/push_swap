/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:08:42 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/03 11:07:36 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	flag_check(t_flags *flag)
{
	if (flag->v > 0)
	{
		ft_putstr_clr(GREEN, "Debugging mode enabled.\n");
	}
	if (flag->c > 0)
	{
		if (flag->v > 0)
			ft_putstr_clr(GREEN, "Colour mode enabled.\n");
		else
			ft_putstr_clr(RED, "Colour mode requires -v to be set.\n");
	}
}

void	contains_flags(int ac, char **av, t_flags *flags)
{
	flags->offset = 0;
	while (ac > 0)
	{
		if (ft_strcmp(av[ac], "-v") == 0)
		{
			flags->v = 1;
			flags->offset++;
		}
		if (ft_strcmp(av[ac], "-c") == 0)
		{
			flags->c = 1;
			flags->offset++;
		}
		ac--;
	}
}
