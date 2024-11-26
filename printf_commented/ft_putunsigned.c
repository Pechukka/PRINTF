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

/**
 * @brief Imprime un número entero sin signo.
 * 
 * @param num Número entero sin signo a imprimir.
 * @return int Número de caracteres impresos.
 */
int	ft_putunsigned(unsigned int num)
{
    int	n; // Contador de caracteres impresos

    n = 0;
    if (num > 9)
        n += ft_putunsigned(num / 10); // Llama recursivamente para imprimir los dígitos anteriores
    return (n += ft_putchar(num % 10 + '0')); // Imprime el dígito actual y suma al contador
}
