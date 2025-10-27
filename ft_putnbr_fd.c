/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:33:55 by jbustos-          #+#    #+#             */
/*   Updated: 2025/10/27 11:00:48 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putchar_fd('-',fd);
        ft_putchar_fd('2',fd);
        n = 147483648;
    }
    if (n < 0)
    {
        ft_putchar_fd('-',fd);
        n = -n;   
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    ft_putchar_fd(n % 10 + '0',fd);
}