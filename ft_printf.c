/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanrome <juanrome@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:53:06 by juanrome          #+#    #+#             */
/*   Updated: 2025/03/06 15:55:24 by juanrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list args, char c)
{
	int	re;

	re = 0;
	if (c == 'd' || c == 'i')
		re += ft_putnbr(va_arg(args, int));
	else if (c == 'c')
		re += ft_putchar(va_arg(args, int));
	else if (c == 's')
		re += ft_putstr(va_arg(args, char *));
	else if (c == 'x')
		re += ft_puthex_min(va_arg(args, unsigned int));
	else if (c == 'X')
		re += ft_puthex_upp(va_arg(args, unsigned int));
	else if (c == 'p')
		re += ft_putmemadress(va_arg(args, void *));
	else if (c == 'u')
		re += ft_putunbr(va_arg(args, unsigned int));
	else if (c == '%')
		return (ft_putchar('%'));
	return (re);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		re;

	va_start(args, str);
	re = 0;
	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] != '\0')
				re += ft_check(args, str[++i]);
		}
		else
			re += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (re);
}
/* int main()
{
	int d = -2147483648;
	int i = 12;
	char c = '3';
	char *s = "holanda";
	int u = 4294967295;
		
	printf("numeros %d %i\n", d, i);
	ft_printf("numeros %d %i\n", d, i);
	printf("caracteres %c\n", c);
	ft_printf("caracteres %c\n", c);
	printf("strings %s\n", s);
	ft_printf("strings %s\n", s);
	printf("hexa %x\n", d);
	ft_printf("hexa %x\n", d);
	printf("puntero %p\n", s);
	ft_printf("puntero %p\n", s);
	printf("unbr %u\n", u);
	ft_printf("unbr %u\n", u);
	printf("porcentaje %%\n");
	ft_printf("porcentaje %%\n");
	return 0;
	}*/