/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:13:18 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/19 17:13:18 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long			nl;
	unsigned int	i;

	i = 0;
	nl = n;
	if (nl < 0)
	{
		i += ft_putchar('-');
		nl = -nl;
	}
	if (nl >= 10)
		i += ft_putnbr(nl / 10);
	i += ft_putchar((nl % 10) + '0');
	return (i);
}
