#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>
/**
  * struct char_function - structure that has character
  * and pointer to related function
  * @c: the character
  * @func_ptr: pointer to the related function of c
  *
  */
typedef struct char_function
{
	char c;
	int (*func_ptr)(va_list);
} char_to_function;

/* _putchar.c file */
int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list pri);
int print_string(va_list pri);
int print_percentage(va_list pri);
int print_int(va_list pri);
int print_binary(va_list pri);
int print_hex(va_list pri);
int print_oct(va_list pri);
int print_HEX(va_list pri);
int print_address(va_list pri);
int print_S(va_list pri);
int print_reverse_string(va_list pri);
int print_rot13(va_list pri);
int print_unsigned(va_list pri);
int print_non_printable(va_list pri);

int (*get_function(char ch))(va_list pri);
int call_func(char ch, va_list pri);


int (*get_function(char ch))(va_list pri);
int call_func(char ch, va_list pri);
#endif /* _PRINTF_H */
