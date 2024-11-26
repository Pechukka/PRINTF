/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:00:06 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/22 18:00:06 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Filtra el formato y llama a la función correspondiente.
 * 
 * @param format Carácter que especifica el formato de impresión.
 * @param args Lista de argumentos variables.
 * @return int Número de caracteres impresos por la función correspondiente.
 */
static int	filter(char format, va_list args)
{
    if (format == 'c')
        return (ft_putchar(va_arg(args, int))); // Imprime un carácter
    else if (format == 's')
        return (ft_putstr(va_arg(args, char *))); // Imprime una cadena
    else if (format == 'p')
        return (ft_putptr(va_arg(args, uintptr_t))); // Imprime un puntero
    else if (format == 'd' || format == 'i')
        return (ft_putnbr(va_arg(args, int))); // Imprime un número entero
    else if (format == 'u')
        return (ft_putunsigned(va_arg(args, unsigned int))); // Imprime un número entero sin signo
    else if (format == 'x')
        return (ft_puthex(va_arg(args, unsigned int), "0123456789abcdef")); // Imprime en hexadecimal (minúsculas)
    else if (format == 'X')
        return (ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF")); // Imprime en hexadecimal (mayúsculas)
    else if (format == '%')
        return (ft_putchar('%')); // Imprime un porcentaje
    return (1); // Retorna 1 si el formato no coincide
}

/**
 * @brief Implementación personalizada de la función printf.
 * 
 * @param format Cadena de formato que contiene los especificadores de formato.
 * @param ... Lista de argumentos variables.
 * @return int Número total de caracteres impresos.
 */
int	ft_printf(char const *format, ...)
{
    va_list	args; // Lista de argumentos variables
    int		i; // Índice para recorrer la cadena de formato
    int		n_prints; // Contador de caracteres impresos

    va_start(args, format); // Inicializa la lista de argumentos
    i = 0;
    n_prints = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            n_prints += filter(format[i + 1], args); // Llama a filter para manejar el formato
            i++;
        }
        else
            n_prints += ft_putchar(format[i]); // Imprime el carácter actual
        i++;
    }
    va_end(args); // Limpia la lista de argumentos
    return (n_prints); // Retorna el número total de caracteres impresos
}
