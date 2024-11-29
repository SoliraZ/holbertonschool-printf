#include"main.h"
/**
 * print_string - Function that print string .
 * @args: argument
 *
 * Return: the number of characters printed
 */

int print_string(va_list args)

{
	char *string = va_arg(args, char *);
	int i = 0;

	if (*string == '\0')
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}
