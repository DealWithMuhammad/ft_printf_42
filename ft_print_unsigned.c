
#include "ft_printf.h"
int ft_print_unsigned(unsigned int n)
{
    if (n >= 10)
        ft_print_unsigned(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
    return count_digits(n);
}