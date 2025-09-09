/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:55:40 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/09 17:14:20 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	size_t	count;

	ptr = (char *)s;
	count = 0;
	while (n > count)
	{
		if ((unsigned char)ptr[count] == (unsigned char)c)
			return (ptr + count);
		count++;
	}
	return (NULL);
}

// int main(void)
// {
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	printf("%s\n", (char *)memchr(tab, -1, 7));
//     printf("%s\n", (char *)ft_memchr(tab, -1, 7));

// }