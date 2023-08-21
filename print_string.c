#include "main.h"
/**
 * print_string - print a string
 * @pri: argument from printf function.
 *
 * Return: count of byte.
 */
int print_string(va_list pri)
{
	int count = 0;
	const char *c = va_arg(pri, const char *);

	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	return (count);
}
