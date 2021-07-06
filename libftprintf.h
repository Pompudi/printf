#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>

typedef struct s_flags {
	int	type;
	itn	width;
	int	minus;
	int	zero;
	int	dot;
	int	star;
}				t_flags

int	ft_printf(const char *fmt, ...);
int process(const char *fmt, va_list ap);

#endif
