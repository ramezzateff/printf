
#include "main.h"
/**
 * print_oct - print a oct number.
 * @pri: argument from printf function.
 *
 * Return: count of bytes.
 */
int print_oct(va_list pri)
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
		temp /= 8;
		arr_size++;
	}
	ptr = malloc(sizeof(*ptr) * arr_size);
	if (ptr == NULL)
		return (0);
	for (i = arr_size; i >= 0; i--)
	{
		ptr[i] = '0' + (bin % 8);
		bin /= 8;
	}
	for (i = 0; i < arr_size - 1; i++)
	{
		_putchar(ptr[i]);
	}
	_putchar('0' + (temp2 % 8));
	return (arr_size);
}
