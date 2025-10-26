/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:26:04 by jbustos-          #+#    #+#             */
/*   Updated: 2025/10/26 11:28:46 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    int number;
    int div;
    int sim;
    char *str;
    
    number = 1;
    div = n;
    sim = 1;
    if (n == -2147483648)
        return(ft_strdup("-2147483648"));
    if (n < 0)
    {
        sim *= -1;
        n *= -1;
        number += 1;
    }
    while (div / 10 != 0)
    {
        number += 1;
        div /= 10;
    }
    str = malloc(sizeof(char) * number + 1);
    if (!str)
        return(NULL);
        
    str[number] = '\0';
    
    while(number--)
    {
        str[number] = n % 10 + '0';
        n /= 10;
    }    
    if (sim == -1)
        str[0] = '-';
    return(str);
}
