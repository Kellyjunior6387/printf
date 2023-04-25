#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
typedef struct {
    char specifier;
    void* arg;
} PrintOption;
typedef struct specifier
{
	char code;
	void (*function)(va_list);
} specifier;
int _printf(const char *format, ...);
int _putchar(char);
void print_char(va_list args);
void print_string(va_list args);
void print_percent(va_list args);
#endif
