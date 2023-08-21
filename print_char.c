#include "main.h"
/**
 * print_char - print a character.
 * @pri: argument from printf function.
 *
 * Return: 1
 */
int print_char(va_list pri)
{
	const char *c = va_arg(pri, char);

	_putchar(c);
	return (1);
}
