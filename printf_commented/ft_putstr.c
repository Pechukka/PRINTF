/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:13:56 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/19 17:13:56 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Calcula la longitud de una cadena de caracteres.
 * 
 * @param str Puntero a la cadena de caracteres.
 * @return size_t Longitud de la cadena de caracteres.
 */
size_t	ft_strlen(const char *str);


/**
 * @brief Imprime una cadena de caracteres.
 * 
 * @param str Puntero a la cadena de caracteres a imprimir.
 * @return int Número de caracteres impresos.
 */
int	ft_putstr(char *str)
{
    int	len; // Longitud de la cadena

    if (!str)
        str = "(null)"; // Maneja el caso de cadena nula
    len = ft_strlen(str); // Calcula la longitud de la cadena
    write(1, str, len); // Escribe la cadena en la salida estándar
    return (len); // Retorna la longitud de la cadena impresa
}
