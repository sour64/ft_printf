/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:13:54 by rmarquit          #+#    #+#             */
/*   Updated: 2021/12/22 20:22:05 by rmarquit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_check(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'd')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_unsignedputnbr(va_arg(ap, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(ap, unsigned int)));
	else if (c == 'X')
		return (ft_putuphex(va_arg(ap, unsigned int)));
	else if (c == 'p')
		return (ft_printpointer(va_arg(ap, unsigned long int)));
	return (0);
}

int	ft_putpointer(unsigned long int n)
{
	if (n >= 0 && n < 10)
		return (ft_putchar(n + '0'));
	if (n < 16)
		return (ft_putchar(n + 87));
	else
		return (ft_putpointer(n / 16) + ft_putpointer(n % 16));
}

int	ft_printf(const char *s, ...)
{
	va_list			ap;
	unsigned int	i;
	int				r;

	r = 0;
	i = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			r += ft_check(s[i + 1], ap);
			i++;
		}
		else
			r += ft_putchar(s[i]);
		i++;
	}
	va_end(ap);
	return (r);
}
