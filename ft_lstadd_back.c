/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:29:17 by jbustos-          #+#    #+#             */
/*   Updated: 2026/09/29 18:37:44 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ultimo;

	if (!lst || !new)
		return ;
	else if (*lst == NULL)
		lst = new;
	else
	{
		ultimo = ft_lstlast(*lst);
		ultimo->next=new;
	}
}
