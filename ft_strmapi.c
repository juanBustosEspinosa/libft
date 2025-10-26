/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:31:58 by jbustos-          #+#    #+#             */
/*   Updated: 2025/10/26 11:46:23 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int count;

    count = 0;
    str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!str)
        return(NULL);
        
    while(s[count] != '\0')
    {
        str[count] = f(count, s[count]);
        count++;
    }
    str[count] = '\0';
    return(str);
}