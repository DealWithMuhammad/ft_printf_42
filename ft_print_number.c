/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:01:51 by muhahmad          #+#    #+#             */
/*   Updated: 2025/03/27 13:41:26 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// for %d and %i specifier
#include "ft_printf.h"

int	ft_print_number(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		count += 1;
	}
	if (n >= 10)
	{
		count += ft_print_number(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	count += 1;
	return (count);
}
