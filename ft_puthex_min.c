/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanrome <juanrome@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:27:17 by juanrome          #+#    #+#             */
/*   Updated: 2025/01/08 21:51:03 by juanrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_min(unsigned int nb)
{
	int		re;
	char	*base;

	re = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		re += ft_puthex_min(nb / 16);
		re += ft_puthex_min(nb % 16);
	}
	else
		re += ft_putchar(base[nb % 16]);
	return (re);
}
