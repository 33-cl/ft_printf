/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:02:34 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 21:33:52 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		sign;
	
	sign = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
		sign++;
	}
	if (n >= 10)
		return (sign + ft_putnbr(n / 10) + ft_putnbr(n % 10));
	else
	{
		ft_putchar(n + '0');
	}
	return (1 + sign);
}