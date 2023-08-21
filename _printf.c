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

	va_start(pri, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%' && format[i] != '\\')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i] == '%')
		{
			i++;
			if (get_function(format[i]))
				count += call_func(format[i], pri);
		}
		else if (format[i] == '\\')
		{
			i++;
			if (format[i] == 'n')
				_putchar('\n');
			else if (format[i] == 't')
				_putchar('\t');
		}
	}
	va_end(pri);
	return (count);
}
