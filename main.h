#ifndef MAIN_H
#define MAIN_H
typedef struct {
    char specifier;
    void* arg;
} PrintOption;
int _printf(const char *format, ...);
int _putchar(char);
#endif
