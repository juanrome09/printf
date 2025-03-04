/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanrome <juanrome@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:15:47 by juanrome          #+#    #+#             */
/*   Updated: 2025/02/21 21:40:27 by juanrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	r;

	r = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		r += write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		r += ft_putnbr(nb / 10);
		r += ft_putnbr(nb % 10);
	}
	else
		r += ft_putchar(nb + '0');
	return (r);
}
