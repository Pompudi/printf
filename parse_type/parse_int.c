#include "../libftprintf.h"

int	parse_int(int i)
{
	char	*int_str;

	int_str = ft_itoa(i);
	return (write(1, int_str, ft_strlen(int_str)));
}

int	count_ui(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa_uint(unsigned int u)
{
	char	*str;
	int		count;

	count = count_ui(u);
	str = malloc(sizeof (char) * count + 1);
	if (!str)
		return (NULL);
	*(str + count) = '\0';
	while (count > 0)
	{
		*(str + (count--) - 1) = (u % 10) + '0';
		u /= 10;
	}
	return (str);
}

int	parse_uint(unsigned int ui)
{
	char *uint_str;

	ui = (unsigned int)(4294967295 + 1 + ui);
	uint_str = ft_itoa_uint(ui);
	return (write(1, uint_str, ft_strlen(uint_str)));
}