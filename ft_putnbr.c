/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:02:34 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 17:25:15 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			if (!ft_putchar('-'))
				return (0);
		}
		if (n < 10 && n >= 0)
		{
			if (!ft_putchar(n + '0'))
				return (0);
		}
		else
		{
			if (!ft_putnbr(n / 10) || !ft_putnbr(n % 10))
				return (0);
		}
	}
	return (1);
}