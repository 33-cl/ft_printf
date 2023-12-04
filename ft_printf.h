/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:53:31 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/04 16:49:50 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

size_t	ft_strlen(const char *s);
int		ft_print_c(va_list args);
int		ft_print_d(va_list args);
int		ft_print_p(va_list args);
int		ft_print_s(va_list args);
int		ft_print_u(va_list args);
int		ft_print_x(va_list args);
int		ft_print_X(va_list args);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_putstr(char *s);
int		ft_print_type(char c, va_list args);
int		ft_printf(char const *, ...);
int		ft_puthexa_lower(unsigned long nb);
int		ft_puthexa_upper(unsigned long nb);

#endif