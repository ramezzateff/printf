#include "main.h"
/**
 * print_non_printable - print a non printable.
 * @pri: argument from printf function.
 *
 * Return: count of bytes.
 */
int print_non_printable(va_list pri)
{
	const char *str = va_arg(pri, const char *);
	int count = 0;

	while (*str)
	{
		if (*str >= 32 && *str < 127)
		{
			putchar(*str);
			str++;
			count++;
		}
	}
	return (count);
}
