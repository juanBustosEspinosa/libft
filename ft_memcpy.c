/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:27:40 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/10 11:35:19 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;
	size_t			count;

	ptrdest = (unsigned char *) dest;
	ptrsrc = (unsigned char *) src;
	count = 0;
	if (!ptrdest && !ptrsrc)
		return (NULL);
	while (n > count)
	{
		ptrdest[count] = ptrsrc[count];
		count++;
	}
	return (dest);
}
