/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:10:08 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/15 12:44:14 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c);
void	ft_putstr(const char *str);
size_t	ft_strlen(const char *s);
int		ft_nbrlen(int nb);
int		ft_unsnbrlen(unsigned long int nb, int base);
int		ft_unsigned(unsigned int nb);
void	ft_putnbr_hexa(unsigned long long nbr, const char *base);
int		ft_printf(const char *str, ...);
int		ft_params(char flag, va_list arg);
int		ft_printf_c(va_list arg);
int		ft_printf_s(va_list arg);
int		ft_printf_p(va_list arg);
int		ft_printf_d(va_list arg);
int		ft_printf_u(va_list arg);
int		ft_printf_x(va_list arg);
int		ft_printf_x_upper(va_list arg);
int		ft_printf_percent(void);

#endif
