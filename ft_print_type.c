/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:05:11 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 16:14:50 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*

%c : prints a single caracter
%s : prints a string
%p : prints the (void *) pointer in hexadecimal format
%d : prints an int
%i : prints an int
%u : prints an unsigned decimal
%x : prints an hexadecimal in lowercase format
%X : prints an hexadecimal in uppercase format
%% : prints a '%'

*/

int		ft_print_type(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_c(args));
	else if (c == 's')
		return (ft_print_s(args));
	else if (c == 'p')
		return (ft_print_p(args));
	else if (c == 'd' || c == 'i')
		return (ft_print_d(args));
	else if (c == 'u')
		return (ft_print_u(args));
	else if (c == 'x')
		return (ft_print_x(args));
	else if (c == 'X')
		return (ft_print_X(args));
	else if (c == '%')
		return (ft_putchar('%'));
	return (1);
}