/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:52:59 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/09 11:19:28 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = strlen(s);
	while (count >= 0)
	{
		if (s[count] == (unsigned char) c)
			return ((char *)(s + count));
		count--;
	}
	return ((char *) NULL);
}

/*char	*ft_strrchr(const char *s, int c)
{
	int	count;
	int	pos;

	count = 0;
	pos = -1;
	while (s[count] != '\0')
	{
		if (s[count] == c)
			pos = count;
		count++;
	}
	if (c == 0)
		return ((char *)(s + count));
	if (pos == -1)
		return ((char *) NULL);
	return ((char *)(s + pos));
}

int main(void)
{
	char *c;
	c = "halo";
	
	printf("%s\n",ft_strrchr(c,'\0'));
	printf("%s\n",strrchr(c,'\0'));
}*/