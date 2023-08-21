#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
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

<<<<<<< HEAD
#endif /* MAIN_H */
=======

#endif /* _PRINTF_H */
>>>>>>> e113f9c528b1743e95dea66e7322ee5d97fb516d
