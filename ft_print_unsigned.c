/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:05:29 by muhahmad          #+#    #+#             */
/*   Updated: 2025/03/20 15:55:14 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_unsigned(unsigned int n)
{
    int count = 0;
    if (n >= 10)
        count += ft_print_unsigned(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
    return count + 1; // +1 for the current digit
}
