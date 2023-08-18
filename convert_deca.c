#include "ft_printf.h"

int	convert_deca(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i = convert_deca((n / 10));
		convert_deca((n % 10));
	}
	if (n >= 0 && n < 10)
	{
		ft_putchar_fd(('0' + n), 1);
	}
	i++;
	return (i);
}

int	write_unsigned_dec(unsigned int u)
{
	int	i;

	i = 0;
	i = i + convert_deca(u);
	return (i);
}
