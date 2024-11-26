#include "main.h"

/**
 * _format - Function that print characters.
 * type: character string.
 * args: arguments.
 *
 * Return: the number of characters printed.
 */

int	_format(const char type, va_list args)
{
	int	i;
	types_t types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{'\0', NULL}
	};

	i = 0;
	while (types[i].type != '\0')
	{
		if (types[i].type == type)
			return (types[i].f(args));
		i++;
	}
}
