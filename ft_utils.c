#include "ft_printf.h"

int count_digits(int n)
{
    if (n == 0)
        return 1; // 0 ka 1 digit hota hai
    int count = 0;
    while (n != 0)
    {
        n /= 10; // 123 → 12 → 1 → 0
        count++;
    }
    return count;
}

int count_hex_digits(unsigned long n)
{
    if (n == 0)
        return 1; // 0 ka 1 digit
    int count = 0;
    while (n != 0)
    {
        n /= 16; // 255 → 15 → 0
        count++;
    }
    return count;
}