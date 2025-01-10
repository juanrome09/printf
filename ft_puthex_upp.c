/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanrome <juanrome@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:29:21 by juanrome          #+#    #+#             */
/*   Updated: 2025/01/09 19:39:43 by juanrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upp(unsigned long long nb)
{
	int		re;
	char	*base;

	re = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		re += ft_puthex_upp(nb / 16);
		re += ft_puthex_upp(nb % 16);
	}
	else
		re += ft_putchar(base[nb % 16]);
	return (re);
}
