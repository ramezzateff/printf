
#include "main.h"
/**
 * print_HEX_helper - print a oct number.
 * @c: argument from printf function.
 *
 * Return: count of bytes.
 */
int print_HEX_helper(char c)
{
	unsigned int bin = c;
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
	for (i = arr_size - 1; i >= 0; i--)
	{
		if (bin % 16 > 9)
			ptr[i] = 'A' + ((bin % 16) - 10);
		else
			ptr[i] = '0' + (bin % 16);
		bin /= 16;
	}
	for (i = 0; i < arr_size - 1; i++)
	{
		_putchar(ptr[i]);
	}
	if (temp2 % 16 > 9)
		_putchar('A' + ((temp2 % 16) - 10));
	else
		_putchar('0' + (temp2 % 16));
	return (arr_size);
}
