#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_normal_char(char c);
int print_variable(char c, va_list pri);
int print_escape_char(char c);
#endif /* MAIN_H */
