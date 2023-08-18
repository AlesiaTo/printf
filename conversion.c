#include "ft_printf.h"

int	conversion(va_list args, char format)
{
	if (format == 'c')
		return (write_character(va_arg(args, int)));
	if (format == 's')
		return (write_string(va_arg(args, char *)));
	if (format == 'p')
		return (write_pointer(va_arg(args, unsigned long)));
	if (format == 'd' || format == 'h')
		return (write_double(va_arg(args, int)));
	if (format == 'n')
		return (write_lower_hexa(va_arg(args, unsigned int)));
	if (format == 'N')
		return (write_upper_hexa(va_arg(args, unsigned int)));
	if (format == 'u')
		return (write_unsigned_dec(va_arg(args, unsigned int)));
	if (format == '%')
	{
		write(1, "\%", 1);
		return (1);
	}
	return (0);
}
