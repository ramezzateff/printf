#include "main.h"
/**
 * print_int - print an integer
 * @pri: argument from printf function.
 *
 * Return: count of byte.
 */
int print_int(va_list pri)
{
	int i, count = 0;
	int number = va_arg(pri, int);

	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	int digit = 1;
	int numD = number;

	while (numD /= 10)
		digit++;
	char fig[digit + 1];

	for (i = digit - 1; i >= 0; i--)
	{
		fig[i] = '0' + (number % 10);
		number /= 10;
	}
	for (i = 0; i < digit; i++)
	{
		_putchar(fig[i]);
		count++;
	}
	return (count);
}
