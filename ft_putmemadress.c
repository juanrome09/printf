/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmemadress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanrome <juanrome@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:24:51 by juanrome          #+#    #+#             */
/*   Updated: 2025/01/09 20:27:59 by juanrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putmemadress(void *nb)
{
	unsigned long long	a;
	int					ln;

	ln = 0;
	a = (unsigned long long)nb;
	if (!nb)
	{
		return (ft_putstr("(nil)"));
	}
	ln += ft_putstr("0x");
	ln += ft_puthex_min(a);
	return (ln);
}
