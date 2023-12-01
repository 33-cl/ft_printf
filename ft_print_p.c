/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:25:47 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 17:30:53 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_p(va_list args)
{
	unsigned long	address;

	address = (unsigned long)va_arg(args, void *);
	return (ft_puthexa_lower(address));
}