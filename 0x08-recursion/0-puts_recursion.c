#include "main.h"

/**
 * _puts_recursion - a fun that prints a string followed by a newline
 * @s: parameter
 * Return: Success
 */

void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}

else
{
_putchar('/n');
}
}
