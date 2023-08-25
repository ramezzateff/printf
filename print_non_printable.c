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
	char *hex;
	int count = 0;

	while (*str)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('X');
			count += print_HEX_helper(*str);
		}
		else
		{
			count += _putchar(*str);
		}
		str++;
	}
	return (count);
}
