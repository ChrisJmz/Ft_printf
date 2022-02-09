/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_uppper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:53:46 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/13 18:53:49 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_x_upper(va_list arg)
{
	size_t	nb;
	size_t	size;

	nb = va_arg(arg, size_t);
	ft_putnbr_hexa((unsigned int)nb, "0123456789ABCDEF");
	size = ft_unsnbrlen((unsigned int)nb, 16);
	return (size);
}
