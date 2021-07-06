#include "libftprintf.h"
#include <stdarg.h>

t_flag	initializations_struct()
{
	t_flag fl;

	fl.type = 0;
	fl.width = 0;
	fl.minus = 0;
	fl.zero = 0;
	fl.dot = -1;
	fl.star = 0;
	return (fl);
}

int	ft_isformat(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u')
		|| c =='x' || c == 'X');
}

int ft_isflag(char c)
{
	return (c == '.' || c == '*' || c == '-' || c == '0');
}

int parse_flag(t_flags fl,char c, va_list ap)
{

}

int process(const char *fmt, va_list ap)
{
	int	i;
	int	count;
	t_flags flags;

	flags = (*t_flag)malloc(sizeof(t_struct));
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			flags = initialization_struct()
			count += parse_flag(flags);
		}
		else
		{

		}
	}
	return (coutn);
}


int	ft_printf(const char *fmt, ...)
{
	int		count;
	va_list	ap;

	if (!fmt)
		return (-1);
	va_start(ap, fmt);
	count = process(fmt,ap);
	va_end(ap);
	return (count);
}