/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:50:12 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/05 18:49:09 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	invalid_char(char c);
static int	print_after_modulo(const char *format, va_list args, int nb_print);

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			nb_printed;

	nb_printed = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			nb_printed = print_after_modulo(format, args, nb_printed);
			if (nb_printed == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar(*format) == -1)
				return (-1);
			nb_printed++;
		}
		format++;
	}
	va_end(args);
	return (nb_printed);
}

static int	print_after_modulo(const char *format, va_list args, int nb_print)
{
	int	val_print;

	if (invalid_char(*format))
	{
		if (ft_putstr("-1") == -1)
			return (-1);
		return (nb_print + 2);
	}
	val_print = ft_print_type(*format, args);
	if (val_print == -1)
		return (-1);
	nb_print += val_print;
	return (nb_print);
}

static int	invalid_char(char c)
{
	if (c == 'c' || c == 'd' || c == 'p' || c == 's' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%' || c == 'i')
		return (0);
	return (1);
}
