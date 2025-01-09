/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanrome <juanrome@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:29:21 by juanrome          #+#    #+#             */
/*   Updated: 2025/01/08 21:51:05 by juanrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upp(unsigned int nb)
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
