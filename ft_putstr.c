/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:50:33 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/01 21:33:32 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr(char *s)
{
	int	length;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	length = ft_strlen(s);
	if (length > 0)
		if (write(1, s, length))
			return (length);
	return (0);
}
