/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:09:15 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/15 17:47:35 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	count;
	size_t	i;

	len = ft_strlen(dst);
	count = len;
	i = 0;
	if (dstsize <= len)
		return (ft_strlen(src) + dstsize);
	while (src[i] != '\0' && dstsize - 1 > count)
	{
		dst[count] = src[i];
		count++;
		i++;
	}
	dst[count] = '\0';
	return (len + ft_strlen(src));
}
