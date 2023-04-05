#include "main.h"

/**
 * _puts_recursion - a fun that prints a string
 * @s: parameter
 * Return: void
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	_putchar('\n');
}
