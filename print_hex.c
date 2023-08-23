
#include "main.h"
/**
 * print_hex - print a oct number.
 * @pri: argument from printf function.
 *
 * Return: count of bytes.
 */
int print_hex(va_list pri)
{
	unsigned int bin = va_arg(pri, unsigned int);
	unsigned int temp = bin;
	unsigned int temp2 = bin;
	int arr_size = 0;
	int i;
	char *ptr;

	if (!bin)
		return (_putchar('0'));
	while (temp != 0)
	{
		temp /= 16;
		arr_size++;
	}
	ptr = malloc(sizeof(*ptr) * arr_size);
	if (ptr == NULL)
		return (0);
	for (i = arr_size; i >= 0; i--)
	{
		if (bin % 16 > 9)
			ptr[i] = 'a' + ((bin % 16) - 10);
		else
			ptr[i] = '0' + (bin % 16);
		bin /= 16;
	}
	for (i = 0; i < arr_size - 1; i++)
	{
		_putchar(ptr[i]);
	}
	if (temp2 % 16 > 9)
		_putchar('a' + ((temp2 % 16) - 10));
	else
		_putchar('0' + (temp2 % 16));
	return (arr_size);
}
