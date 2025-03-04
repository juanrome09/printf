/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanrome <juanrome@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:16:31 by juanrome          #+#    #+#             */
/*   Updated: 2025/03/04 15:39:56 by juanrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	int	re;

	re = 0;
	if (nb > 9)
	{
		re += ft_putunbr(nb / 10);
		re += ft_putunbr(nb % 10);
	}
	else
		re += ft_putchar(nb + '0');
	return (re);
}
