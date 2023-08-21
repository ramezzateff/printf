#include "main.h"

/**
 * print_hex - print a number in hexadecimal format.
 * @pri: argument from printf function.
 *
 * Return: count of bytes.
 */
int print_hex(va_list pri)
{
	int num, i = 0, rem, count = 0;
	char hex_arr[100];

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		rem = num % 16;

		if (rem < 10)
			hex_arr[i] = '0' + rem;
		else
			hex_arr[i] = 'A' + (rem - 10);

		num = num / 16;
	}
	count = i;
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(hex_arr[i]);
		count++;
	}
	return (count);
}
