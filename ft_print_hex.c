

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