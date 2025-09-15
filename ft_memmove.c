/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:43:45 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/10 12:15:45 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;
	int				count;

	ptrdest = (unsigned char *) dest;
	ptrsrc = (unsigned char *) src;
	count = -1;
	if (!ptrdest && !ptrsrc)
		return (NULL);
	if (ptrdest > ptrsrc)
	{
		while (n > 0)
		{
			n--;
			ptrdest[n] = ptrsrc[n];
		}
	}
	else
	{
		while (n > (size_t)(++count))
			ptrdest[count] = ptrsrc[count];
	}
	return (dest);
}
