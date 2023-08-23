#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned int ui;

    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");


    _printf("Character:[%c] [%c]\n", 'H', 'P');
    printf("Character:[%c] [%c]\n", 'H', 'P');
    _printf("%b\n", 98);
    _printf("%b\n", 0);
    _printf("%b\n", 100);
    _printf("%b\n", 97);
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned octal:[%o]\n", 578);
    printf("Unsigned octal:[%o]\n", 578);
    _printf("Unsigned octal:[%o]\n", 579);
    printf("Unsigned octal:[%o]\n", 579);
    _printf("Unsigned hexadecimal:[%X]\n", ui);
    printf("Unsigned hexadecimal:[%X]\n", ui);
    _printf("Unsigned hexadecimal:[%X]\n", 578);
    printf("Unsigned hexadecimal:[%X]\n", 578);
    _printf("Unsigned hexadecimal:[%X]\n", 579);
    printf("Unsigned hexadecimal:[%X]\n", 579);
    return (0);
}
