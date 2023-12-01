/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:13:50 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 17:22:20 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr_unsigned(unsigned int n)
{
	if (n < 10 && n >= 0)
	{
		if (!ft_putchar(n + '0'))
			return (0);
	}
	else
		if (!ft_putnbr_unsigned(n / 10) || !ft_putnbr_unsigned(n % 10))
			return (0);
	return (1);
}