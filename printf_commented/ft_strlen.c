/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:19:46 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/19 17:19:46 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Calcula la longitud de una cadena de caracteres.
 * 
 * @param s Puntero a la cadena de caracteres.
 * @return size_t Longitud de la cadena de caracteres.
 */
size_t	ft_strlen(const char *s)
{
    size_t	i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}