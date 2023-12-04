/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:19:35 by maeferre          #+#    #+#             */
/*   Updated: 2023/12/04 12:25:03 by maeferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_X(va_list args)
{
	int		rtn;
	
	rtn = ft_puthexa_upper(va_arg(args, unsigned int));
	if (rtn >= 0)
		return (rtn);
	return (-1);
}