#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_normal_char(char c);
int print_variable(char c, va_list pri);
int print_escape_char(char c);

int print_char(va_list pri);
int print_string(va_list pri);
int print_percentage(va_list pri);
int print_int(va_list pri);
int print_binary(va_list pri);
int print_hex(va_list pri);

#endif /* MAIN_H */
