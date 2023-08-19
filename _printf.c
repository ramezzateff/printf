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
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && foramt[1] == ' ' && format[2] == '\0')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%' && format[i] != '\\')
		{
			count += print_normal_char(format[i]);
		}
		else if (format[i] == '%')
		{
			count += print_variable(format[i + 1], pri);
			i++;
		}
		else if (format[i] == '\\')
		{
			print_escape_char(format[i + 1]);
			i++;
		}
	}
	va_end(pri);
	return (count);
}
