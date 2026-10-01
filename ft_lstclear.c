/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:57:01 by jbustos-          #+#    #+#             */
/*   Updated: 2026/10/01 16:14:56 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void			ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nxt;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nxt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nxt;
	}
	*lst = NULL;
}
