/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:56:49 by aezghari          #+#    #+#             */
/*   Updated: 2024/11/23 14:57:04 by aezghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long n, int is_upper)
{
	int		len;
	char	*base;

	len = 0;
	if (is_upper == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n > 15)
		len += print_hex(n / 16, is_upper);
	len += ft_putchar(base[n % 16]);
	return (len);
}
