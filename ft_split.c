/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:57:43 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/22 11:56:22 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*static size_t	prueba(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	max;

	max = strlen(src);
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
}*/
static int count_delimiter(char const *s, char c)
{
	int t;
	int count;
	
	t = 0;
	count = 0;

	while (s[count] != '\0')
	{
		while (s[count] == c)
			count++;
		if (s[count] != '\0')
			t++;
		
		while (s[count] != '\0' && s[count] != c)
			count++;
	}
	return (t);
}

static int count_letter(char const *s, char c, int *count)
{
	int t;

	t = 0;
	while (s[*count] == c)
		(*count)++;
	while (s[*count] != '\0')
	{
		if (s[*count] == c)
			return (t);
		else
		{
			t++;
			(*count)++;
		}
	}
	return (t);
}

char	**ft_split(char const *s, char c)
{
	int	count;
	char	**ptr;
	int	delimiter;
	int i;
	int letter;
	
	if (!s || c == '\0')
    	return (NULL);
	i = 0;
	count = 0;
	delimiter = count_delimiter(s, c);
	ptr = (char **)malloc((delimiter + 1) * sizeof(char *));
	if (!ptr)
			return (NULL);
	ptr[delimiter] = NULL;

	while (delimiter > i)
	{
		letter = count_letter(s, c, &count);
		if (letter > 0)
		{
		ptr[i] = (char *)malloc(letter + 1);
		if (!ptr[i])
			return (NULL);
		ft_strlcpy(ptr[i],s + (count-letter),letter + 1);//strlcpy
		i++;
		}
	}
	return (ptr);
}

int main(int arc, char **avg)
{
	(void)arc;
	char **c = ft_split((char const *)avg[1], '\0');
	int i = 0;
	while (c[i] != NULL)
	{
		printf("%s\n", c[i]);
		i++;
	}
	
}