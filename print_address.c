#include "main.h"

/**
 * print_address - print a address
 * @pri: argument from printf function.
 *
 * Return: count of bytes.
 */
int print_address(va_list pri)
{
	void *p = va_arg(pri, void *);
	char buffer[100];
	int i = 0;

	sprintf(buffer, "Memory Address: %p", p);
	for (i = 0; buffer[i] != '\0'; i++)
		_putchar(buffer[i]);
	return (strlen(buffer));
}
