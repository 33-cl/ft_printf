/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:59:35 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 16:14:45 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_puthexa_lower(unsigned long nb)
{
	if (nb > 16)
	{
		ft_puthexa_lower(nb / 16);
		ft_puthexa_lower(nb % 16);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + '0');
		else
			ft_putchar((nb - 10) + 'a');
	}
	return (1);
}