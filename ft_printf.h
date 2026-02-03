/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haydinog <haydinog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:33:01 by haydinog          #+#    #+#             */
/*   Updated: 2026/02/03 12:26:49 by haydinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int ft_printf(const char *format, ...);


int ft_putchar(char c);
int ft_putstr(char *str);


int ft_putnbr(int n);
int ft_putnbr_unsigned(unsigned int n);

int	ft_puthex(unsigned int n, char format);
int ft_putpointer(unsigned long ptr);

#endif
