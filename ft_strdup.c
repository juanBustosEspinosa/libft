/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:08:57 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/16 13:24:08 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copia;
	int		count;

	copia = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!copia)
		return (NULL);
	count = 0;
	while (s[count] != '\0')
	{
		copia[count] = s[count];
		count++;
	}
	copia[count] = '\0';
	return (copia);
}
