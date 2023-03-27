#include "main.h"

/**
 * _puts - a fun to print a string
 * @str: aprameter of type char
 * Return: void
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
