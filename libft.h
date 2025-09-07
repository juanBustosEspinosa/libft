/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbustos- <jbustos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:42:28 by jbustos-          #+#    #+#             */
/*   Updated: 2025/09/07 17:29:47 by jbustos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>

int	ft_isascii(int letter);
int	ft_isdigit(int n);
int	ft_isalpha(int letter);
int	ft_isalnum(int letter);
int	ft_isprint(int n);
int	ft_strlen(char *c);
int	ft_toupper(int c);
int	ft_tolower(int c);

#endif