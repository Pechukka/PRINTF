/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:12:48 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/19 17:12:48 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	filter(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_putptr(va_arg(args, uintptr_t)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar('%'));
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		n_prints;

	va_start(args, format);
	i = 0;
	n_prints = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			n_prints += filter(format[i + 1], args);
			i++;
		}
		else
			n_prints += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (n_prints);
}
