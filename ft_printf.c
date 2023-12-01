/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:50:12 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 16:14:49 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
 
int	ft_printf(char const *format, ...)
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
			val_print = ft_print_type(format[i], args);
			if (val_print < 0)
				return (-1);
			else
				nb_printed += val_print;
		}
		else
		{
			ft_putchar(format[i]);
			nb_printed++;
		}
		i++;
	}
	va_end(args);
	return (nb_printed);
}
 
/*
#include <stdio.h>
#include <limits.h>
int main()
{
	ft_printf("ft_printf : %%d : %d | %%i : %i | %%c : \'%c\' | %%s : \"%s\" | %%u : %u | %%x : %x | %%X : %X | %%p : %p\n", 42, 33, 'A', "Hello", 684, 255, -2, "dfg");
	
	printf("printf    : %%d : %d | %%i : %i | %%c : \'%c\' | %%s : \"%s\" | %%u : %u | %%x : %x | %%X : %X | %%p : %p\n", 42, 33, 'A', "Hello", 684, 255, -2, "dfg");

	return 0;
}
*/