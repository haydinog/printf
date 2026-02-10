/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:53:14 by haydinog          #+#    #+#             */
/*   Updated: 2026/02/03 12:49:51 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	len += ft_putchar((nb % 10) + '0');
	return (len);
}

int	ft_putnbr_unsigned(unsigned long n)
{
	int		len;
	long	nb;

	nb = n;
	len = 0;
	if (nb >= 10)
		len += ft_putnbr_unsigned(nb / 10);
	len += ft_putchar((nb % 10) + '0');
	return (len);
}

int	ft_puthex(unsigned long n, char format)
{
	int		len;
	char	*base;
	long	nb;

	nb = n;
	len = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb >= 16)
		len += ft_puthex(nb / 16, format);
	len += ft_putchar(base[nb % 16]);
	return (len);
}
