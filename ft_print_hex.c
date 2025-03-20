/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:14:18 by muhahmad          #+#    #+#             */
/*   Updated: 2025/03/20 18:37:07 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, int uppercase)
{
	char	*hex_digits;
	char	c;

	if (uppercase)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	if (n >= 16)
		ft_print_hex(n / 16, uppercase);
	c = hex_digits[n % 16];
	write(1, &c, 1);
	return (count_hex_digits(n));
}
