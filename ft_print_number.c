/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:01:51 by muhahmad          #+#    #+#             */
/*   Updated: 2025/03/20 15:54:28 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// for %d and %i specifier
#include "ft_printf.h"

int ft_print_number(int n)
{
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return 11;
    }
    if (n < 0)
    {
        write(1, "-", 1);
        return 1 + ft_print_number(-n);
    }
    if (n >= 10)
        ft_print_number(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
    return count_digits(n);
}