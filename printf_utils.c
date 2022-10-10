/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 20:15:00 by rmarquit          #+#    #+#             */
/*   Updated: 2021/12/28 20:15:02 by rmarquit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr(int n)
{
	if (n >= 0 && n < 10)
		return (ft_putchar(n + '0'));
	else if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (n < 0)
		return (ft_putchar('-') + ft_putnbr(-n));
	else
		return (ft_putnbr(n / 10) + ft_putnbr(n % 10));
}
