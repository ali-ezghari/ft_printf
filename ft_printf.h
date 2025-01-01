/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:01:19 by aezghari          #+#    #+#             */
/*   Updated: 2024/11/23 15:01:33 by aezghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_printf(const char *s, ...);
int	print_num(int n);
int	print_hex(unsigned long n, int is_upper);
int	print_un(unsigned int n);
int	print_addr(unsigned long ptr);

#endif
