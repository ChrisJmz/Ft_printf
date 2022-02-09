/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:55:40 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/13 19:00:07 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_p(va_list arg)
{
	size_t	nbr;

	nbr = va_arg(arg, size_t);
	if (nbr == 0)
	{
		ft_putstr("0x0");
		return (3);
	}
	ft_putstr("0x");
	ft_putnbr_hexa(nbr, "0123456789abcdef");
	return (ft_unsnbrlen(nbr, 16) + 2);
}
