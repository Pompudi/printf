#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

int ft_printf(const char *fmt, ...);
int process(const char *fmt, va_list ap);
int ft_isformat(char c);
int	parse(int *i, char *str, va_list ap);
int	parse_type(int c, va_list args);
int	parse_int(int i);
int	parse_uint(unsigned int ui);
int	count_ui(unsigned int n);
char	*ft_itoa_uint(unsigned int u);
int	parse_string(char *str);
int	parse_char(char c);
int	parse_x(unsigned int x, int flag_reg);
char	*itoa_x(unsigned long x, int flag_r);
int	count_x(unsigned long n);

#endif
