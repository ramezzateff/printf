#include <unistd.h>

/**
  * _putchar - prints a character to STDOUT
  * @c: character to print
  *
  * Return: 1 on success, 0 on failure
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
