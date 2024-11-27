#include "main.h"

/**
 * print_char - Function that prints a character.
 * @args: Character to print.
 *
 * Return: Number of characters printed.
 */

int     print_char(va_list args)
{
	char    c;

	c = va_arg(args, int);
	return (_putchar(c));
}
