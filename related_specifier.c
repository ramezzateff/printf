#include "main.h"

/**
  * get_function - finds the funciton related to character
  * @ch: the character to find the related function to
  *
  * Return: a pointer to the related function
  */
int (*get_function(char ch))(va_list pri)
{
	char_function specifiers[] = {
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
		if (ch == specifiers[i].c)
			return (specifiers[i].function_ptr);
		i++;
	}
	return (NULL);
}

/**
  * call_func - calls the related function
  * @ch: character for the get_fucntion
  * @pri: argument for the function
  *
  * Return: number of bytes printed
  */
int call_func(char ch, va_list pri)
{
	int (*ptr_to_function)(va_list pri) = get_function(ch);

	if (ptr_to_function != NULL)
		return (ptr_to_function(pri));
	return (0);
}
