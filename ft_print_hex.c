/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:14:18 by muhahmad          #+#    #+#             */
/*   Updated: 2025/03/20 15:54:24 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_print_hex(unsigned long n, int uppercase)
{
    char *hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    if (n >= 16)
        ft_print_hex(n / 16, uppercase);
    char c = hex_digits[n % 16];
    write(1, &c, 1);
    return count_hex_digits(n);
}