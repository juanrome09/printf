/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanrome <juanrome@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:55:34 by juanrome          #+#    #+#             */
/*   Updated: 2025/01/09 19:39:36 by juanrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_putunbr(unsigned int nb);
int	ft_puthex_min(unsigned long long nb);
int	ft_puthex_upp(unsigned long long nb);
int	ft_putmemadress(void *ptr);
int	ft_printf(const char *str, ...);

#endif // FT_PRINT_H
