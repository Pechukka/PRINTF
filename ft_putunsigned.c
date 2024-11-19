/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:13:59 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/19 17:13:59 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int num)
{
	int	n;

	n = 0;
	if (num > 9)
		n += ft_putunsigned(num / 10);
	return (n += ft_putchar(num % 10 + '0'));
}
