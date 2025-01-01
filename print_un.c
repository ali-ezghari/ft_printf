/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_un.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:57:41 by aezghari          #+#    #+#             */
/*   Updated: 2024/11/23 14:57:44 by aezghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_un(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (write(1, "0", 1));
	if (n >= 10)
		len += print_un(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
