/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:31:46 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/13 19:00:34 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_s(va_list arg)
{
	size_t	i;
	char	*str;

	i = 0;
	str = va_arg(arg, char *);
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i] && str)
	{
		write(1, &str[i], 1);
		i++;
	}
	if (str)
		return (ft_strlen(str));
	return (0);
}
