/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 09:52:16 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/03 13:55:27 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int is_sorted(t_list *head)
{
	int		*i;
	int		*j;
	t_list	*tmp;
	t_list	*prev;

	tmp = head;
	if (tmp == NULL)
		return (TRUE);
	while (t_list->next != NULL)
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
	arr = NULL;
}
