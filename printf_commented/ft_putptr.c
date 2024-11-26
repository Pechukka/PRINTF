/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:13:51 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/19 17:13:51 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Imprime un carácter.
 * 
 * @param c Carácter a imprimir.
 * @return int Número de caracteres impresos.
 */
int	ft_putchar(int c);


/**
 * @brief Calcula la longitud de un número en base 16.
 * 
 * @param num Número a calcular la longitud.
 * @return int Longitud del número en base 16.
 */
int	ft_ptrlen(uintptr_t num)
{
    int	len;

    len = 0;
    while (num != 0)
    {
        len++;
        num = num / 16;
    }
    return (len);
}


/**
 * @brief Convierte un número a hexadecimal y lo imprime.
 * 
 * @param num Número a convertir e imprimir.
 */
void	ft_hexptr(uintptr_t num)
{
    if (num >= 16)
    {
        ft_hexptr(num / 16);
        ft_hexptr(num % 16);
    }
    else
    {
        if (num <= 9)
            ft_putchar(num + '0');
        else
            ft_putchar(num - 10 + 'a');
    }
}


/**
 * @brief Imprime un puntero en formato hexadecimal.
 * 
 * @param ptr Puntero a imprimir.
 * @return int Número de caracteres impresos.
 */
int	ft_putptr(uintptr_t ptr)
{
    int	print_length;

    print_length = 0;
    print_length += write(1, "0x", 2);
    if (ptr == 0)
        print_length += write(1, "0", 1);
    else
    {
        ft_hexptr(ptr);
        print_length += ft_ptrlen(ptr);
    }
    return (print_length);
}
