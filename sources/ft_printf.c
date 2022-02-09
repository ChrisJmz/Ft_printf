/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:00:56 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/15 12:43:24 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		r;
	va_list	arg;

	i = 0;
	r = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			r++;
		}
		else if (str[i] == '%')
		{
			r = r + ft_params(str[i + 1], arg);
			i++;
		}
		i++;
	}
	return (r);
}
