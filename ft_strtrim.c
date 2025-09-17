/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:21:50 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/17 17:25:03 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	start_s1(char const *s1, char const *set)
{
	int	j;
	int	i;
	int	tru;
	int	t;

	t = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		tru = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				tru = 1;
			j++;
		}
		if (tru == 0)
			return (t);
		t++;
		i++;
	}
	return (t);
}

static int	end_s1(char const *s1, char const *set)
{
	int	j;
	int	i;
	int	tru;
	int	t;

	t = 0;
	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		tru = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				tru = 1;
			j++;
		}
		if (tru == 0)
			return (t);
		t++;
		i--;
	}
	return (t);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*copy;
	int		count;

	count = 0;
	start = start_s1(s1, set);
	end = end_s1(s1, set);
	if (start + end >= ft_strlen(s1))
	{
		copy = malloc(1);
		copy[0] = '\0';
		return (copy);
	}
	copy = malloc((ft_strlen(s1) - (start + end) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (start < ft_strlen(s1) - end)
	{
		copy[count] = s1[start];
		count++;
		start++;
	}
	copy[count] = '\0';
	return (copy);
}
