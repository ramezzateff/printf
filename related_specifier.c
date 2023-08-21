#include "main.h"

/**
  * get_function - finds the funciton related to character
  * @c: the character to find the related function to
  *
  * Return: a pointer to the related function
  */
int (*get_function(char c))(va_list pri)
{
	struct char_function specifiers[] = 
	{
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_HEX},
		{'S', print_non_printable},
		{'p', print_address},
		{'r', print_reverse_string},
		{'R', print_rot13},
	};
	int i = 0;

	while (i < 14)
	{
		if (c == specifiers[i].c)
			return (specifiers[i].function_ptr);
		i++
	}
	return (NULL);
}

/**
  * print_func - calls the related function
  * @c: the character to find related funciton with
