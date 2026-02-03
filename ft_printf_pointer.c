/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:02:40 by haydinog          #+#    #+#             */
/*   Updated: 2026/02/03 12:38:57 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_ptr(unsigned long n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		len += ft_puthex_ptr(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_putpointer(unsigned long ptr)
{
	int	len;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	len = 0;
	len += write(1, "0x", 2);
	len += ft_puthex_ptr(ptr);
	return (len);

}
