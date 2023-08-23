
#include "main.h"
/**
 * print_unsigned - print an integer
 * @pri: argument from printf function.
 *
 * Return: count of byte.
 */
int print_unsigned(va_list pri)
{
	int divisor = 1;
	unsigned int temp = va_arg(pri, unsigned int);
	int count = 0;

	while ((temp / divisor) > 9)
		divisor *= 10;
	for (; divisor != 0; divisor /= 10)
	{
		_putchar('0' + (temp / divisor));
		temp %= divisor;
		count++;
	}
	return (count);
}
