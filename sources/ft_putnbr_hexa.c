/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:21:35 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/13 19:01:54 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_hexa(unsigned long long nbr, const char *base)
{
	unsigned long long	size;
	unsigned long long	nb;

	size = ft_strlen(base);
	nb = (unsigned long long) nbr;
	if (nb >= size)
		ft_putnbr_hexa(nb / size, base);
	ft_putchar(base[nb % size]);
}
