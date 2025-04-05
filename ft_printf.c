/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:43:04 by muhahmad          #+#    #+#             */
/*   Updated: 2025/04/03 14:48:06 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (specifier == 's')
		return (ft_print_string(va_arg(args, char *)));
	if (specifier == 'd' || specifier == 'i')
		return (ft_print_number(va_arg(args, int)));
	if (specifier == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	if (specifier == 'x' || specifier == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), (specifier == 'X')));
	if (specifier == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	if (specifier == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		total_printed;
	va_list	args;

	va_start(args, format);
	total_printed = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			total_printed += handle_format(*format, args);
		}
		else
		{
			write(1, format, 1);
			total_printed++;
		}
		format++;
	}
	va_end(args);
	return (total_printed);
}
/*
#include <stdio.h>
int main()
{
    char name[50];
    int age;

 
    ft_printf("Enter your name: ");
    scanf("%49s", name);
    ft_printf("Enter your age: ");
    scanf("%d", &age);

   
    ft_printf("Hello, %s!\n", name);
    ft_printf("Your age is %d.\n", age);
    ft_printf("Your memory address: %p\n", (void *)&age);
    ft_printf("Your age in hexadecimal: %x\n", age);
    ft_printf("Your age as unsigned integer: %u\n", (unsigned int)age);
    ft_printf("Just a percent sign: %%\n");
}
*/
