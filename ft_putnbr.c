/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:02:34 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/04 13:21:25 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		sign;
	int		div;
	int		modulo;
	
	sign = 0;
	if (n == -2147483648)
	{
		if (ft_putstr("-2147483648") == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		if (!ft_putchar('-'))
			return (-1);
		sign++;
	}
	if (n >= 10)
	{
		div = ft_putnbr(n / 10);
		modulo = ft_putnbr(n % 10);
		if (div >= 0 && modulo >= 0)
			return (sign + div + modulo);
		return (-1);
	}
	if (ft_putchar(n + '0') == -1)
		return (-1);
	return (1 + sign);
}