#include "ft_printf.h"

int ft_print_pointer(void *ptr)
{
    write(1, "0x", 2);
    return 2 + ft_print_hex((uintptr_t)ptr, 0);
}