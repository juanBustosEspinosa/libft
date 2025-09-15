/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:48:07 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/15 18:08:56 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sim;
	int	n;
	int	count;

	count = 0;
	sim = 1;
	n = 0;
	while (nptr[count] == 32 || (nptr[count] >= 9 && nptr[count] <= 13))
		count++;
	if (nptr[count] == '-')
	{
		sim *= -1;
		count++;
	}
	else if (nptr[count] == '+')
		count++;
	while (nptr[count] >= '0' && nptr[count] <= '9')
	{
		n = 10 * n + (nptr[count] - '0');
		count++;
	}
	return (n * sim);
}
