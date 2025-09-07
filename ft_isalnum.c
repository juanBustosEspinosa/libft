/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:41:50 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/07 16:57:47 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int letter)
{
	if ((letter >= 65 && letter <= 90) || (letter >= 'a' && letter <= 'z')
		|| (letter >= '0' && letter <= '9'))
		return (1);
	return (0);
}
