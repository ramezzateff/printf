#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);

/* _printf.c file */
int _printf(const char *format, ...);

int print_normal_char(char c);

int print_variable(char c, va_list pri);

int print_escape_char(char c);

#endif /* _PRINTF_H */
