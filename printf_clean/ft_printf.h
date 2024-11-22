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

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
size_t	ft_strlen( const char *str);
int		ft_putptr(uintptr_t ptr);
int		ft_putnbr(int n);
int		ft_putunsigned(unsigned int num);
int		ft_puthex(unsigned int nr, char *base);

#endif
