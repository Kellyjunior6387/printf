#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: the string passed
 * return: count of words printed to stdout
 */
int _printf(const char* format, ...)
{
	char *s;
	char c;
	int count;
	va_list args;

	va_start(args, format);

	count = 0;
	while (*format != '\0')
	{
	if (*format == '%')
	{
	format++;
	if (*format == '%')
	{
	_putchar('%');
	count++;
	}
	else if (*format == 'c')
	{
	c = va_arg(args, int);
	_putchar(c);
	count++;
	}
	else if (*format == 's')
	{
	s = va_arg(args, char*);
	while (*s != '\0')
	{
	_putchar(*s);
	s++;
	count++;
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
