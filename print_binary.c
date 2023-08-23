#include "main.h"
/**
 * print_binary - print a binary number.
 * @pri: argument from printf function.
 *
 * Return: count of bytes.
 */
int print_binay(va_list pri)
{
	unsigned int bin = va_arg(pri, unsigned int);
	unsigned int temp = bin;
	unsigned int arr_size = 0;
	int i;
	char *ptr;

	if (!bin)
		return (_putchar('0'));
	while (temp != 0)
	{
		temp /= 2;
		arr_size++;
	}
	ptr = malloc(sizeof(*ptr) * arr_size);
	if (ptr == NULL)
		return (NULL);
	for (i = arr_size; i >= 0; i--)
	{
		ptr[i] = '0' + (bin % 2);
		bin /= 2;
	}
	for (i = 0; i < arr_size - 1; i++)
	{
		_putchar(ptr[i]);
	}
	_putchar('0' + (temp2 % 2));
	return (arr_size);
}
