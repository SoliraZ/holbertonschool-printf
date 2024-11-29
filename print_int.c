#include "main.h"

/**
 * print_int - Function that print an int.
 * @args: Character to print.
 *
 * Return: Number of characters printed.
 */

int     print_int(va_list args)
{
	long int     nb = va_arg(args, int);
	int     length = 0;
	int     power = 1;
	long int     div;

	if (nb < 0)
	{
		_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
		return (length = length + _putchar(nb + '0'));
	div = nb;
	while (div >= 10)
	{
		power = power * 10;
		div = div / 10;
	}
	while (power >= 1)
	{
		length = length + _putchar(((nb / power) % 10) + '0');
		power = power / 10;
	}
	return (length);
}
