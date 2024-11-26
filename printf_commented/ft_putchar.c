/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:13:11 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/19 17:13:11 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Imprime un carácter.
 * 
 * @param c Carácter a imprimir.
 * @return int Número de caracteres impresos.
 */
int	ft_putchar(int c)
{
    return (write(1, &c, 1));
}
