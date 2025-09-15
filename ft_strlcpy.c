/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:21:16 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/15 17:44:38 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	max;

	max = ft_strlen(src);
	count = 0;
	if (size == 0)
		return (max);
	while (size - 1 > count && src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (max);
}

/*int main(void)
{
char dest[15];

	printf("%ld %s\n",ft_strlcpy(dest, "lorem", 15),dest);
	printf("%ld %s\n",strlcpy(dest, "lorem", 15),dest);
}*/