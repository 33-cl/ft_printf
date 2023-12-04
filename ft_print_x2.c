/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:03:19 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/04 17:03:21 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x2(va_list args)
{
	int	rtn;

	rtn = ft_puthexa_upper(va_arg(args, unsigned int));
	if (rtn >= 0)
		return (rtn);
	return (-1);
}
