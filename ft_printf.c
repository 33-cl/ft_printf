/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:50:12 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/04 16:48:51 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	invalid_char(char c);

int	ft_printf(const char *format, ...)
{
	size_t		i;
	va_list		args;
	int			nb_printed;
	int			val_print;

	i = 0;
	nb_printed = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (invalid_char(format[i]))
			{
				if (ft_putstr("-1") == -1)
					return (-1);
				return (nb_printed + 2);
			}
			val_print = ft_print_type(format[i], args);
			if (val_print == -1)
				return (-1);
			nb_printed += val_print;
		}
		else
		{
			if (ft_putchar(format[i]) == -1)
				return (-1);
			nb_printed++;
		}
		i++;
	}
	va_end(args);
	return (nb_printed);
}

static int	invalid_char(char c)
{
	if (c == 'c' || c == 'd' || c == 'p' || c == 's' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%' || c == 'i')
		return (0);
	return (1);
}
