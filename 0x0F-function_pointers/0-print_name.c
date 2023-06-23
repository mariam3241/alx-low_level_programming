#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a fun that prints a name
 * @name: parameter
 * @f: parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
