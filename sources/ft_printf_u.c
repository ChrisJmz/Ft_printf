/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:56:06 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/13 19:00:53 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_u(va_list arg)
{
	unsigned int	nb;

	nb = va_arg(arg, unsigned int);
	return (ft_unsigned(nb));
}

int	ft_unsigned(unsigned int nb)
{
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	if (nb > 9)
	{
		ft_unsigned(nb / 10);
		ft_unsigned(nb % 10);
	}
	return (ft_unsnbrlen(nb, 10));
}
