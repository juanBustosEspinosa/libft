/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:57:43 by jbustos-          #+#    #+#             */
/*   Updated: 2025/10/01 18:25:52 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>

static int count_delimiter(char const *s, char c)
{
	int t;
	int count;
	
	t = 0;
	count = 0;

	if(!s || s[0] == '\0')
		return (0);

	while (s[count] == c)
		count++;
	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			t++;
			while (s[count] == c)
				count++;
		}
		else
			count++;
	}
	if (s[count - 1] == c)
		t--;
	return (t + 1);
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
		
	i = 0;
	count = 0;
	delimiter = count_delimiter(s, c);
	ptr = (char **)malloc((delimiter + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (delimiter > i)
	{
		if (s[0] == '\0')
			break ;
		letter = count_letter(s, c, &count);
		ptr[i] = (char *)malloc(letter + 1);
		if (!ptr[i])
			return (NULL);
		ft_strlcpy(ptr[i],s + (count-letter),letter + 1);
		i++;
	}
	ptr[delimiter] = NULL;
	return (ptr);
}
