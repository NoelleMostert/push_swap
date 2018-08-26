/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 13:35:42 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/26 10:23:51 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(char *str, size_t n)
{
	t_list *newlist;

	if (!(newlist = (t_list *)malloc(sizeof(*newlist))))
		return (NULL);
	newlist->str = ft_strdup(str);
	newlist->n = n;
	newlist->next = NULL;
	return (newlist);
}
