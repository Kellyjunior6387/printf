#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: the string passed
 * return: count of words printed to stdout
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	unsigned int i;
	specifier specifiers[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	};
	va_start(args, format);

	while (*format != '\0')
	{
	if (*format == '%')
	{
	format++;
	for (i = 0; i < sizeof(specifiers) / sizeof(specifiers[0]); i++)
	{
	if (*format == specifiers[i].code)
	{
	specifiers[i].function(args);
	count++;
	break;
	}
	}
	}
	else
	{
	_putchar(*format);
	count++;
	}
	format++;
	}
	va_end(args);
	return (count);
}
