/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_addr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:55:59 by aezghari          #+#    #+#             */
/*   Updated: 2024/11/23 14:56:17 by aezghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_addr(unsigned long ptr)
{
	unsigned long	n;
	int				len;

	if (!ptr)
		return (write(1, "(nil)", 5));
	len = 0;
	n = (unsigned long)ptr;
	len += write(1, "0x", 2);
	len += print_hex(n, 0);
	return (len);
}
