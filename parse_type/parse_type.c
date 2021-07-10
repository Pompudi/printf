#include "../libftprintf.h"

int parse_type(int c, va_list args)
{
    int count;

    char_count = 0;
    if (c == 'c')
        count += parse_char(va_arg(args, int));
    else if (c == 's')
        count += parse_string(va_arg(args, char *));
    else if (c == 'p')
        count += parse_point(va_arg(args, unsigned long int));
    else if (c == 'd' || c == 'i')
        count += parse_int(va_arg(args, int));
    else if (c == 'u')
        count += parse_uint((unsigned int)va_arg(args, unsigned int));
    else if (c == 'x')
        count += parse_x(va_arg(args, unsigned int), 0);
    else if (c == 'X')
        count += parse_x(va_arg(args, unsigned int), 1);
    return (char_count);
}