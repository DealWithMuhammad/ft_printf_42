/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:17:13 by muhahmad          #+#    #+#             */
/*   Updated: 2025/02/20 11:17:13 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h> // Variadic functions (va_list, va_start, etc.)
#include <unistd.h>
#include <stdint.h>

// Main printf function
int ft_printf(const char *format, ...);

// Helper functions
int ft_print_char(char c);
int ft_print_string(char *str);
int ft_print_number(int n);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned long n, int uppercase);
int ft_print_pointer(void *ptr);

// Utility functions (digit counting)
int count_digits(int n);
int count_hex_digits(unsigned long n);

#endif