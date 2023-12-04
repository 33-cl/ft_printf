/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:25:47 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/04 16:51:05 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(va_list args)
{
	unsigned long	address;
	int				len_address;

	address = (unsigned long)va_arg(args, void *);
	if (address == 0)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		return (5);
	}
	if (ft_putstr("0x") == -1)
		return (-1);
	len_address = ft_puthexa_lower(address);
	if (len_address == -1)
		return (-1);
	return (2 + len_address);
}
