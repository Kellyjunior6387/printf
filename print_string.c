#include "main.h"
#include <stdarg.h>
void print_string(va_list args)
{
	char *s = va_arg(args, char *);
	while (*s != '\0')
	{
	_putchar(*s);
	s++;
	}
}
