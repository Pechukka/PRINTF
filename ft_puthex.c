/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:13:14 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/19 17:13:14 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, char *base)
{
	int		num_hex[16];
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (num == 0)
		result += ft_putchar('0');
	while (num)
	{
		num_hex[i] = num % 16;
		num = num / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_putchar(base[num_hex[i]]);
	return (result);
}
