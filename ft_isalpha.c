/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:41:05 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/07 16:57:22 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int letter)
{
	if ((letter >= 65 && letter <= 90)
		|| (letter >= 97 && letter <= 122))
		return (1);
	return (0);
}

/*int main(void)
{
	printf("%d resultado", ft_isalpha('a'));
	printf("\n");
}*/