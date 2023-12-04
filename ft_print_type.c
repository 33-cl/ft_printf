/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:05:11 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/04 17:04:35 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_type(char c, va_list args)
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
		return (ft_print_x2(args));
	else if (c == '%')
		return (ft_putchar('%'));
	return (ft_putstr("-1"));
}
