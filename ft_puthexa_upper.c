/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:06:16 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/04 13:04:31 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_puthexa_upper(unsigned long nb)
{
	unsigned long div;
	unsigned long modulo;

	if (nb >= 16)
	{
		div = ft_puthexa_upper(nb / 16);
		modulo = ft_puthexa_upper(nb % 16);
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
			if (ft_putchar((nb - 10) + 'A') == -1)
				return (-1);
		}
	}
	return (1);
}