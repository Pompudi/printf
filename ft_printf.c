#include "libftprintf.h"

int ft_isformat(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u')
		|| c =='x' || c == 'X');
}

int parse(int *i, char *str, va_list ap)
{
	if (ft_isformat(str[*i]))
		return (parse_type(str[*i], ap));
	else
	    return (write(1, '%', 1));
}

int process(char *fmt, va_list ap)
{
	int	i;
	int	count;

	count = 0;
	flags = (*t_flag)malloc(sizeof(t_struct));
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i + 1])
		{
            i++;
            count += parse(fmt, &i, ap);
        }
		else if(fmt[i] != '%')
			count += write(1, &fmt[i], 1);
		i++;
	}
	return (coutn);
}

int	ft_printf(const char *fmt, ...)
{
	int		count;
	char	*str;
	va_list	ap;

	if (!fmt)
		return (-1);
	str = ft_strdup(fmt);
	va_start(ap, fmt);
	count = process(fmt,ap);
	va_end(ap);
	return (count);
}