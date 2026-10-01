/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:27:17 by jbustos-          #+#    #+#             */
/*   Updated: 2026/10/01 17:05:59 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*exception(t_list **lst, void (*del)(void*), void *n_content)
{
	if (n_content != NULL)
		del(n_content);
	ft_lstclear(lst,del);
	return(NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nxt;
	t_list	*list;
	void	*n_content;
	t_list	*save;

	list = NULL;
	if (!f || !del || !lst)
		return (NULL);
	while (lst)
	{
		nxt = lst->next;
		n_content = f(lst->content);
		if (n_content == NULL)
			return (exception(&list, del, n_content));
		save = ft_lstnew(n_content);
		if (save == NULL)
			return (exception(&list, del, n_content));
		else
			ft_lstadd_back(&list, save);
		lst = nxt;
	}
	return (list);
}
