#include "main.h"

/**
  * print_reverse_string - print reversed
  * @pri: arg
  * Return: chars printed
  */
int print_reverse_string(va_list pri)
{
	int i = 0;
	int count = 0;
	char *str = va_arg(pri, char *);

	if (str)
	{
		while (*str)
		{
			i++;
			str++;
		}
		str--;
		while (i > 0)
		{
			count += _putchar(*str);
			str--;
			i--;
		}
	}
	return (count);
}
