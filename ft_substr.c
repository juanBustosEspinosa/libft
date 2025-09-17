/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:30:32 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/17 16:06:13 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	count;
	size_t	slen;

	slen = ft_strlen(s);
	if (start >= (unsigned int)slen)
	{
		sub = malloc(1);
		sub[0] = '\0';
		return (sub);
	}
	if (len > slen - start)
		len = slen - start;
	count = 0;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && count < len)
	{
		sub[count] = s[start];
		count++;
		start++;
	}
	sub[count] = '\0';
	return (sub);
}
