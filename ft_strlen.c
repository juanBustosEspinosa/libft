/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:04:38 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/07 17:13:31 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *c)
{
	int	count;

	count = 0;
	while (c[count] != '\0')
		count++;
	return (count);
}

/*int main(void)
{
	char *c;
	c = "hola";
	printf("%d\n", ft_strlen(NULL));
}*/