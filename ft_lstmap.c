/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:44:17 by nreyes-p            #+#    #+#             */
/*   Updated: 2023/02/09 09:30:45 by nreyes-p           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*ft_freenode(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	temp = NULL;
	if (lst == NULL || del == NULL)
		return (0);
	while (lst)
	{
		temp = (lst)->next;
		(*del)((lst)->content);
		free(lst);
		lst = temp;
	}
	return (lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;

	res = NULL;
	new = NULL;
	if (f == NULL || lst == NULL || del == NULL)
		return (0);
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			lst = ft_freenode(lst, (*del));
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
