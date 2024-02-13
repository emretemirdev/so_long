/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:03:13 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:03:13 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	print_hex(unsigned int nb);
int	print_upperhex(unsigned int nb);
int	print_pointer(unsigned long p);
int	print_char(char c);
int	print_string(char *str);
int	digit(int nb);
int	print_signedint(int nb);
int	print_unsigned(unsigned int nb);
int	control(char c, va_list ap);

#endif
