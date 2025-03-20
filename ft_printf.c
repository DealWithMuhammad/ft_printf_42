/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:43:04 by muhahmad          #+#    #+#             */
/*   Updated: 2025/03/20 15:55:12 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// 5
int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int total_printed = 0;

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
                total_printed += ft_print_char(va_arg(args, int));
            else if (*format == 's')
                total_printed += ft_print_string(va_arg(args, char *));
            else if (*format == 'd' || *format == 'i')
                total_printed += ft_print_number(va_arg(args, int));
            else if (*format == 'u')
                total_printed += ft_print_unsigned(va_arg(args, unsigned int));
            else if (*format == 'x' || *format == 'X')
                total_printed += ft_print_hex(va_arg(args, unsigned int), (*format == 'X'));
            else if (*format == 'p')
                total_printed += ft_print_pointer(va_arg(args, void *));
            else if (*format == '%')
                total_printed += ft_print_char('%');
            format++;
        }
        else
        {
            write(1, format, 1);
            total_printed++;
            format++;
        }
    }
    va_end(args);
    return total_printed;
}