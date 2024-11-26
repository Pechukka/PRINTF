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

/**
 * @brief Imprime un número en formato hexadecimal.
 * 
 * @param num Número a imprimir.
 * @param base Cadena que representa la base hexadecimal (minúsculas o mayúsculas).
 * @return int Número de caracteres impresos.
 */
int	ft_puthex(unsigned int num, char *base)
{
    int		num_hex[16]; // Array para almacenar los dígitos hexadecimales
    int		i; // Índice para recorrer el array
    int		result; // Contador de caracteres impresos

    i = 0;
    result = 0;
    if (num == 0)
        result += ft_putchar('0'); // Maneja el caso de número cero
    while (num)
    {
        num_hex[i] = num % 16; // Almacena el dígito hexadecimal
        num = num / 16; // Divide el número por 16
        i++;
    }
    while (--i >= 0)
        result += ft_putchar(base[num_hex[i]]); // Imprime los dígitos hexadecimales
    return (result); // Retorna el número de caracteres impresos
}
