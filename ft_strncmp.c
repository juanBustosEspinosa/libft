/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:23:09 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/09 13:12:00 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (s1[count] != '\0' && s2[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		count++;
		if (count == n)
			return (0);
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

/*int main(void)
{
	// printf("%d\n",ft_strncmp("test\200", "test\0", 6));
	// printf("%d\n",strncmp("test\200", "test\0", 6));
	printf("%d\n",ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("%d\n",strncmp("abcdefgh", "abcdwxyz", 4));
}*/