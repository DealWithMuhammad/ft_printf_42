#include "ft_printf.h"

int main()
{
    ft_printf("Char: %c\n", 'A');
    ft_printf("String: %s\n", "Hello");
    ft_printf("Decimal: %d, Hex: %x\n", 42, 42);
    ft_printf("Pointer: %p\n", &main);
    return 0;
}