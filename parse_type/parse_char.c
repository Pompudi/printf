#include "../libftprintf.h"

int	parse_char(char c)
{
	return (write(1, &c, 1));
}