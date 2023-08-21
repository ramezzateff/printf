#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
  * struct char_function - structure that has character and pointer to related function
  * @c: the character
  * @func_ptr: pointer to the related function of c
  *
  */
struct char_function
{
	char c;
	int (*func_ptr)(va_list);
}

/* _putchar.c file */
int _putchar(char c);

/* _printf.c file */
int _printf(const char *format, ...);

int print_normal_char(char c);

int print_variable(char c, va_list pri);

int print_escape_char(char c);

#endif /* _PRINTF_H */
