#include"main.h"
/**
 *print_string - Function that print string .
 *args - argument
 *
 *Return: the number of characters printed
 */

int print_string(va_list args)

{
	char *string = va_arg(args,char *);
	int i ;
	i = 0;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return (i);	
}
