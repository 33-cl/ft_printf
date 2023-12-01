/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:06:16 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 16:14:42 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_puthexa_upper(unsigned long nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb > 16)
	{
		ft_puthexa_upper(nb / 16);
		ft_puthexa_upper(nb % 16);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + '0');
		else
			ft_putchar((nb - 10) + 'A');
	}
	return (1);
}