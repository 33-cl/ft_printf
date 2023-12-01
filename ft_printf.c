/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:50:12 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 21:05:49 by maeferre         ###   ########.fr       */
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
	int	size_printf;
	int size_ft_printf = ft_printf("ft_printf : %p\t||   ", 16);
	printf(" size = %d\n", size_ft_printf);

	//size_printf = printf("printf    : %p\t||   ", 16);
	//printf(" size = %d\n", size_printf);

	return 0;
}*/