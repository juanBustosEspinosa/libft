/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:08:57 by jbustos-          #+#    #+#             */
/*   Updated: 2026/10/01 17:51:54 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cp;
	int		count;

	cp = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!cp)
		return (NULL);
	count = 0;
	while (s[count] != '\0')
	{
		cp[count] = s[count];
		count++;
	}
	cp[count] = '\0';
	return (cp);
}
