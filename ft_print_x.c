/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:19:19 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/04 12:24:30 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_x(va_list args)
{
	int		rtn;
	
	rtn = ft_puthexa_lower(va_arg(args, unsigned int));
	if (rtn >= 0)
		return (rtn);
	return (-1);
}