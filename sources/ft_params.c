/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:14:48 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/15 12:51:13 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_params(char flag, va_list arg)
{
	int	r;

	r = 0;
	if (flag == 'c')
		r = ft_printf_c(arg);
	else if (flag == 's')
		r = ft_printf_s(arg);
	else if (flag == 'p')
		r = ft_printf_p(arg);
	else if (flag == 'd' || flag == 'i')
		r = ft_printf_d(arg);
	else if (flag == 'u')
		r = ft_printf_u(arg);
	else if (flag == 'x')
		r = ft_printf_x(arg);
	else if (flag == 'X')
		r = ft_printf_x_upper(arg);
	else if (flag == '%')
		r = ft_printf_percent();
	va_end(arg);
	return (r);
}
