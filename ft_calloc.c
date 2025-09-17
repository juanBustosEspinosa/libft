/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:28:58 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/16 13:36:46 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			count;

	count = 0;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (count < (nmemb * size))
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
