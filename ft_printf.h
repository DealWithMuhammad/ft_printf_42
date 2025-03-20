/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:17:13 by muhahmad          #+#    #+#             */
/*   Updated: 2025/03/20 18:45:20 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

// Main printf function
int	ft_printf(const char *format, ...);

// Functions
int	ft_print_char(char c);
int	ft_print_string(char *str);
int	ft_print_number(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned long n, int uppercase);
int	ft_print_pointer(void *ptr);

// Utility
int	count_digits(unsigned int n);

int	count_hex_digits(unsigned long n);

#endif
