/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:22:14 by rmarquit          #+#    #+#             */
/*   Updated: 2021/12/22 20:22:16 by rmarquit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_unsignedputnbr(unsigned int n)
{
	if (n >= 0 && n < 10)
		return (ft_putchar(n + '0'));
	else
		return (ft_putnbr(n / 10) + ft_putnbr(n % 10));
}

int	ft_puthex(unsigned int n)
{
	if (n >= 0 && n < 10)
		return (ft_putchar(n + '0'));
	if (n < 16)
		return (ft_putchar(n + 87));
	else
		return (ft_puthex(n / 16) + ft_puthex(n % 16));
}

int	ft_putuphex(unsigned int n)
{
	if (n >= 0 && n < 10)
		return (ft_putchar(n + '0'));
	if (n < 16)
		return (ft_putchar(n + 55));
	else
		return (ft_putuphex(n / 16) + ft_putuphex(n % 16));
}

int	ft_printpointer(unsigned long int n)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_putpointer(n);
	return (i);
}

int	ft_putstr(char *s)
{
	int	w;

	w = 0;
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}
