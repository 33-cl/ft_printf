/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:59:35 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/04 13:03:30 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_puthexa_lower(unsigned long nb)
{
	unsigned long div;
	unsigned long modulo;

	if (nb >= 16)
	{
		div = ft_puthexa_lower(nb / 16);
		modulo = ft_puthexa_lower(nb % 16);
		if (div >= 0 && modulo >= 0)
			return (div + modulo);
		return (-1);
	}
	else
	{
		if (nb < 10)
		{
			if (ft_putchar(nb + '0') == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar((nb - 10) + 'a') == -1)
				return (-1);
		}
	}
	return (1);
}