/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:58:35 by aezghari          #+#    #+#             */
/*   Updated: 2024/11/23 14:59:17 by aezghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	formats(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += print_num(va_arg(args, int));
	else if (format == 'u')
		len += print_un(va_arg(args, unsigned int));
	else if (format == 'x')
		len += print_hex(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		len += print_hex(va_arg(args, unsigned int), 1);
	else if (format == 'p')
		len += print_addr(va_arg(args, unsigned long));
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	if (!format || write(1, 0, 0) == -1)
		return (-1);
	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += formats(*format, args);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
