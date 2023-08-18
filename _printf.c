#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: string to be printed.
 *
 * Return: the number of characters printed
 *	(excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list pri;
	unsigned int i, count = 0;
	char *tmp_string;

	va_start(pri, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%' && format[i] != '\\')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(pri, int));
				count++;
			}
			else if (format[i + 1] == 's')
			{
				tmp_string = va_arg(pri, char *);
				while (*tmp_string)
				{
					_putchar(*tmp_string);
					tmp_string++;
					count++;
				}
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
			}
		i++;
		}
		else if (format[i] == '\\')
		{
			if (format[i + 1] == 'n')
			{
				_putchar(10);
				count++;
			}
		}
	}
	_putchar('\n');
	va_end(pri);
	return (count);
}
