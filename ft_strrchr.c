/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:52:59 by jbustos-          #+#    #+#             */
/*   Updated: 2026/10/01 18:06:33 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == (unsigned char) c)
			return ((char *)(s + count));
		count--;
	}
	return ((char *) NULL);
}

/*
int main(void)
{
	char *c;
	c = "halo";
	
	printf("%s\n",ft_strrchr(c,'\0'));
	printf("%s\n",strrchr(c,'\0'));
}*/