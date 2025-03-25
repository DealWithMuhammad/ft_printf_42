/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:55:05 by muhahmad          #+#    #+#             */
/*   Updated: 2025/03/20 18:36:00 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_hex_digits(unsigned long n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}
