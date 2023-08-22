#include "main.h"
/**
 * print_int - print an integer
 * @pri: argument from printf function.
 *
 * Return: count of byte.
 */
int print_int(va_list pri)
{
	int divisor = 1;
	int temp = va_arg(pri, int);
	int count = 0;

	if (temp < 0)
	{
		_putchar('-');
		temp *= -1;
		count++;
	}
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
