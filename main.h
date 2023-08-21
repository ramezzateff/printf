#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
<<<<<<< HEAD
#include <limits.h>
=======
#include <unistd.h>
>>>>>>> 45621d8ba30afd5f355d450fd474c936ae60d440

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

<<<<<<< HEAD
int print_char(va_list pri);
int print_string(va_list pri);
int print_percentage(va_list pri);
int print_int(va_list pri);
int print_binary(va_list pri);
int print_hex(va_list pri);

#endif /* MAIN_H */
=======
#endif /* _PRINTF_H */
>>>>>>> 45621d8ba30afd5f355d450fd474c936ae60d440
