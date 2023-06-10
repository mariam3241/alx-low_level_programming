#include "main.h"

/**
 * _puts - a fun that prints a string
 * @str: parameter
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

