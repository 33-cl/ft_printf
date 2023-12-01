/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:13:50 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 21:36:27 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr_unsigned(unsigned int n)
{
	if (n < 10 && n >= 0)
		ft_putchar(n + '0');
	else
		return (ft_putnbr_unsigned(n / 10) + ft_putnbr_unsigned(n % 10));
	return (1);
}