#include "main.h"

/**
 * _format - Function that select the good function to use.
 * @type: the type.
 * @args: arguments.
 *
 * Return: the number of characters printed.
 */

int	_format(const char type, va_list args)
{
	int	i;
	types_t format[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	i = 0;
	while (format[i].types)
	{
		if (type == format[i].types)
			return (format[i].f(args));
		i++;
	}
	_putchar('%');
	_putchar(type);
	return (2);
}
