/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 10:44:40 by nmostert          #+#    #+#             */
/*   Updated: 2018/08/26 13:06:02 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_stackpop(char *str, size_t n)
{
	t_list *tmp;

	if (!(tmp = (t_list *)malloc(sizeof(*newlist))))
		return (NULL);
	tmp->head = tmp->next



t_list	*ft_stackpop(t_stack *s)
{
	t_list	*tmp;

	tmp = NULL;
	if (s != NULL)
	{
		tmp = s->head;
		if (s->head != NULL)
		{
			s->head = tmp->next;
			s->size -= 1;
		}
	}
	return (tmp);
}
