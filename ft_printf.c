#include "libftprintf.h"
#include <stdarg.h>
#include "libft/libft.h"

t_flag	*initializations_struct(t_flag *fl)
{
	fl->type = 0;
	fl->width = 0;
	fl->minus = 0;
	fl->zero = 0;
	fl->dot = -1;
	fl->star = 0;
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

int parse_flag(t_flags fl, int i, char *str, va_list ap)
{
	int count = 0;
	if ()
}

int	skip_form(char *fmt, int i)
{
	while (strchr("0.*-d=cspdiuxX", fmt[i]))
		i++;
	return (i);
}

int process(char *fmt, va_list ap)
{
	int	i;
	int	count;
	t_flags flags;

	count = 0;
	flags = (*t_flag)malloc(sizeof(t_struct));
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i])
		{
			flags = initializations_struct(flags);
			count += parse_flag(flags, ++i, fmt, ap);
			i = skip_form(fmt, i);
			free(flags);
		}
		else
		{
			count += write(1, &fmt[i], 1);
		}
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