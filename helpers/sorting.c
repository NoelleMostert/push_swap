/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 09:52:16 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/05 16:51:19 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int is_sorted(t_list *head)
{
	int		*x;
	int		*y;
	t_list	*tmp;
	t_list	*prev;

	tmp = head;
	if (tmp == NULL)
		return (TRUE);
	while (tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
		x = (int *)prev->content;
		y = (int *)tmp->content;
		if (*x > *y)
			return (FALSE);
	}
	return (TRUE);
}

int is_revsorted(t_list *head)
{
	int		*x;
	int		*y;
	t_list	*tmp;
	t_list	*prev;

	tmp = head;
	if (tmp == NULL)
		return (TRUE);
	while (tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
		x = (int *)prev->content;
		y = (int *)tmp->content;
		if (*x > *y)
			return (FALSE);
	}
	return (TRUE);
}

void	free_split(char **arr)
{
	int i;

	if (arr != NULL)
	{
		i = 0;
		while (arr[i] != 0)
			free(arr[i++]);
		free(arr[i]);
		free(arr);
	}
	*arr = NULL;
}

int		duplicates(int ac, long arr[])
{
	int	tmp;
	int	i;

	tmp = 0;
	while (tmp < ac)
	{
		i = tmp + 1;
		while (i <= ac)
		{
			if (arr[tmp] == arr[i++])
				return (FALSE);
		}
		tmp++;
	}
	return (TRUE);
}

int		is_valid(int ac, char *av[])
{
	int		tmp;
	char	*str;
	long	arr[ac];

	tmp = ac;
	while (tmp >= 0)
	{
		str = av[tmp];
		if (*str == '-' || *str == '+')
			str++;
		while (*str != '\0')
		{
			if (ft_isdigit(*str) == FALSE)
				return (FALSE);
			str++;
		}
		arr[tmp] = ft_atol(av[tmp]);
		if (arr[tmp] > MAX_INT || arr[tmp] < MIN_INT)
			return (FALSE);
		tmp--;
	}
	return (duplicates(ac, arr));
}
