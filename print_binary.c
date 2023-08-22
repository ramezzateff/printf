#include "main.h"
/**
 * print_binary - print a binary number.
 * @pri: argument from printf function.
 *
 * Return: count of bytes.
 */
int print_binary(va_list pri)
{
	int a[20], rem, i = 0, count;
	int numb = va_arg(pri, int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	while (numb != 0)
	{
		rem = numb % 2;
		a[i] = rem;
		i++;
		numb = numb / 2;
	}

	count = i;

	for (i = count - 1; i >= 0; i--)
	{
		_putchar('0' + a[i]);
		count++;
	}
	return (count);
}
