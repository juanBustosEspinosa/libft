/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:16:08 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/15 17:46:31 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	t;

	t = ft_strlen(needle);
	i = 0;
	j = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (len > i && haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			while ((haystack[i + j] == needle[j]
					&& len > i + j && haystack[i + j] != '\0'))
				j++;
			if (t == j)
				return ((char *)haystack + i);
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char *ptr = ft_strnstr("lorem ipsum dolor sit amet", "", 10);
	if (ptr == NULL)
		printf("NULL\n");
	else
		printf("%s\n",ptr);
	
	// printf("%s\n",strnstr("lorem ipsum dolor sit amet", "lorem", 15));
}*/
