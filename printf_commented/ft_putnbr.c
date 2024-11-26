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

/**
 * @brief Imprime un número entero.
 * 
 * @param n Número entero a imprimir.
 * @return int Número de caracteres impresos.
 */
int	ft_putnbr(int n)
{
    long			nl; // Variable para manejar el valor absoluto del número
    unsigned int	i; // Contador de caracteres impresos

    i = 0;
    nl = n;
    if (nl < 0)
    {
        i += ft_putchar('-'); // Imprime el signo negativo
        nl = -nl; // Convierte el número a positivo
    }
    if (nl >= 10)
        i += ft_putnbr(nl / 10); // Llama recursivamente para imprimir los dígitos anteriores
    i += ft_putchar((nl % 10) + '0'); // Imprime el dígito actual
    return (i); // Retorna el número de caracteres impresos
}
