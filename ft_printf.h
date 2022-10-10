/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:22:31 by rmarquit          #+#    #+#             */
/*   Updated: 2021/12/22 20:22:33 by rmarquit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_unsignedputnbr(unsigned int n);
int		ft_putstr(char *s);
int		ft_puthex(unsigned int n);
int		ft_putuphex(unsigned int n);
int		ft_putpointer(unsigned long int n);
int		ft_printpointer(unsigned long int n);
int		ft_check(char c, va_list ap);
int		ft_printf(const char *s, ...);

#endif