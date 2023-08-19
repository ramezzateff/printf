#include "main.h"

/**
  * print_normal_char - prints a normal character
  * @c: character to print
  *
  * Return: 1 for 1 character printed
  */
int print_normal_char(char c)
{
	_putchar(c);
	return (1);
}

/**
  * print_variable - prints a normal variable
  * @c: which variable to print
  * @pri: argument and value of variable
  *
  * Return: number characters printed
  */
int print_variable(char c, va_list pri)
{
	int count = 0;
	char *tmp_string;

	if (c == 'c')
	{
		_putchar(va_arg(pri, int));
		count++;
	}
	else if (c == 's')
	{
		tmp_string = va_arg(pri, char *);
		while (*tmp_string)
		{
			_putchar(*tmp_string);
			tmp_string++;
			count++;
		}
	}
	else if (c == '%')
	{
		_putchar('%');
		count++;
	}
	return (count);
}

/**
  * print_escape_char - prints an escape character
  * @c: escape character to print
  *
  * Return: 1 for number characters printed
  */
int print_escape_char(char c)
{
	if (c == 'n')
	{
		_putchar('\n');
	}
	return (1);
}
int print_int(int dd, va_list pri)
{
	int asci;
	if (dd == 'd')
	{
		if (ascii >= 48 && ascii <= 57)
			_putchar('0' + dd)aktb 
	}
}
