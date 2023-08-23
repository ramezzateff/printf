#include "main.h"
/**
 * print_binary - print a binary number.
 * @pri: argument from printf function.
 *
 * Return: count of bytes.
 */
int print_binary(va_list pri)
{
	int count = 0;
	unsigned int numb = va_arg(pri, unsigned int);
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	while (mask != 0)
	{
		((numb & mask) != 0) ?  _putchar('1') :  _putchar('0');
		count++;
		mask >>= 1;
	}
	return (count);
}
