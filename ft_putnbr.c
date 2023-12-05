/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:02:34 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/05 18:30:36 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_sign(int *n);

int	ft_putnbr(int n)
{
	int		sign;
	int		div;
	int		modulo;

	if (n == -2147483648)
	{
		if (ft_putstr("-2147483648") == -1)
			return (-1);
		return (11);
	}
	sign = check_sign(&n);
	if (sign == -1)
		return (-1);
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

static int	check_sign(int *n)
{
	if (*n < 0)
	{
		*n = -(*n);
		if (!ft_putchar('-'))
			return (-1);
		return (1);
	}
	return (0);
}
