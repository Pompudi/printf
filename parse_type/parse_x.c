#include "../libftprintf.h"

int	count_x(unsigned long n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

char	*itoa_x(unsigned long x, int flag_r)
{
	int		count;
	char	*s;

	count = count_x(x);
	s = (char *)malloc(sizeof(char) * count + 1);
	if (!s)
		return (0);
	s[count] = '\0';
	while (x > 0)
	{
		if (x % 16 >= 10)
		{
			if (flag_r)
				s[count - 1] = (x % 16) + 55;
			else
				s[count - 1] = (x % 16) + 87;
		}
		else
			s[count - 1] = (x % 16) + '0';
		count--;
		x /= 16;
	}
	return (s);
}

int	parse_x(unsigned int x, int flag_reg)
{
	char	*str_x;

	x = (unsigned int)(4294967295 + 1 + x);
	if (x == 0)
		return (write(1, "0", 1));
	str_x = itoa_x((unsigned long) x, flag_reg);
	return (write(1, str_x, ft_strlen(str_x)));
}
