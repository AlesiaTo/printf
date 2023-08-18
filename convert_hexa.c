#include "ft_printf.h"

int	convert_hexa_lowercase(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i = convert_hexa_lowercase((n / 16));
		convert_hexa_lowercase((n % 16));
	}
	if (n <= 9)
	{
		ft_putchar_fd(('0' + n), 1);
	}
	if (n >= 10 && n < 16)
	{
		ft_putchar_fd(('a' - 10 + n), 1);
	}
	i++;
	return (i);
}

int	convert_hexa_uppercase(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i = convert_hexa_uppercase((n / 16));
		convert_hexa_uppercase((n % 16));
	}
	if (n <= 9)
	{
		ft_putchar_fd(('0' + n), 1);
	}
	if (n >= 10 && n < 16)
	{
		ft_putchar_fd(('A' - 10 + n), 1);
	}
	i++;
	return (i);
}

int	write_lower_hexa(unsigned int x)
{
	int	i;

	i = 0;
	i = i + convert_hexa_lowercase(x);
	return (i);
}

int	write_upper_hexa(unsigned int y)
{
	int	i;

	i = 0;
	i = i + convert_hexa_uppercase(y);
	return (i);
}
