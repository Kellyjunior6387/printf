#include "main.h"
#include <stdarg.h>
void print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
}
