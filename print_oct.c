#include "main.h"

/**
 * print_oct - print a octal number.
 * @pri: argument from printf function.
 *
 * Return: count of bytes.
 */
int print_oct(va_list pri)
{
	int a[30], rem, i = 0, count;
	int numb = va_arg(pri, int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	while (numb != 0)
	{
		rem = numb % 8;
		a[i++] = rem;
		numb = numb / 8;
	}
	count = i;

	for (i = count - 1; i >= 0; i--)
	{
		_putchar('0' + a[i]);
		count++;
	}
	return (count);
}
