/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freynoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 10:36:17 by freynoso          #+#    #+#             */
/*   Updated: 2019/02/20 15:21:43 by freynoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*ret_new;
	t_list	*temp;
	t_list	*lst_new;

	if (lst == NULL)
		return (NULL);
	lst_new = lst;
	temp = (*f)(lst_new);
	if ((ret_new = ft_lstnew(temp->content, temp->content_size)) == NULL)
		return (NULL);
	ret = ret_new;
	lst_new = lst_new->next;
	while (lst_new != NULL)
	{
		temp = (*f)(lst_new);
		ret_new->next = ft_lstnew(temp->content, temp->content_size);
		if (ret_new->next == NULL)
			return (NULL);
		ret_new = ret_new->next;
		lst_new = lst_new->next;
	}
	return (ret);
}
