/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:48:10 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/25 17:32:09 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int main(void)
{
	t_list *lst;

	lst = ft_lstnew("random bullshit", 74);
	lst->next = ft_lstnew("more crap", 100);
	ft_lstadd(&lst, ft_lstnew("grrr argh", 60));

	while (lst)
	{
		printf("%s\n", lst->str);
		lst = lst->next;
	}
	return (0);
}
