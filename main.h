#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct types
{
		char *type;
			int (*f)(va_list);
} types_t;

int	_printf(const char *format, ...);
int	_format(char type, va_list args);
int	_putchar(char c);
int	print_char(va_list args);
int	print_string(va_list args);
int	print_percent(va_list args);
int	print_int(va_list args);

#endif

