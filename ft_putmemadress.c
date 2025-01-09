/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmemadress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanrome <juanrome@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:24:51 by juanrome          #+#    #+#             */
/*   Updated: 2025/01/09 18:25:48 by juanrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putmemadress(unsigned long nb)
{
	int		re;
	char	*base;

	re = 0;
	base = "0123456789abcdef";
	if (nb == 0)
	{
		return (write(1, ("(nil)"), 5));
	}

	if (nb >= 16)
	{
		re += ft_putmemadress(nb / 16);
	}
		re += ft_putchar(base[nb % 16]);
		
	return (re);
}
