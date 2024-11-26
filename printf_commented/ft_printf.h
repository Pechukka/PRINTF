/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:15:43 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/19 17:15:43 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>  // Para manejar argumentos variables
# include <unistd.h>  // Para las funciones de escritura
# include <stdio.h>   // Para las funciones estándar de entrada/salida
# include <stdint.h>  // Para los tipos de datos enteros con tamaño específico

// Prototipos de funciones
int		ft_printf(char const *format, ...); // Implementación personalizada de printf
int		ft_putchar(int c); // Imprime un carácter
int		ft_putstr(char *str); // Imprime una cadena de caracteres
size_t	ft_strlen(const char *str); // Calcula la longitud de una cadena de caracteres
int		ft_putptr(uintptr_t ptr); // Imprime un puntero en formato hexadecimal
int		ft_putnbr(int n); // Imprime un número entero
int		ft_putunsigned(unsigned int num); // Imprime un número entero sin signo
int		ft_puthex(unsigned int nr, char *base); // Imprime un número en formato hexadecimal

#endif
