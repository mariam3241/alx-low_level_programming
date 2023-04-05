#include "main.h"

/**
 * _print_rev_recursion - a fun that prints a string in reverse order
 * @s: parameter
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
