/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 13:35:42 by nmostert          #+#    #+#             */
/*   Updated: 2018/09/01 14:43:16 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list *newlist;

	if (!(newlist = (t_list *)malloc(sizeof(*newlist))))
		return (NULL);
	newlist->content = ft_strdup(content);
	newlist->content_size = content_size;
	newlist->next = NULL;
	return (newlist);
}*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;

	if ((ret = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content != NULL)
	{
		ret->content = (void *)malloc(content_size);
		ft_memmove(ret->content, content, content_size);
		ret->content_size = content_size;
		ret->next = NULL;
	}
	else
	{
		ret->content = NULL;
		ret->content_size = 0;
		ret->next = 0;
	}
	return (ret);
}
