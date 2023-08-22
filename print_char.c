#include "main.h"
/**
 * print_char - print a character.
 * @pri: argument from printf function.
 *
 * Return: 1
 */
int print_char(va_list pri)
{
	char c;

	c = va_arg(pri, int);

	return (_putchar(c));
}
