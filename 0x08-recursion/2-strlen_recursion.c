#include "main.h"

/**
 * _strlen_recursion - a fun that prints the length of a string
 * @s: parameter
 * Return: a number of type int indecates the length of the string
 */


int _strlen_recursion(char *s)
{
int i = 0;

if (*s != '\0')
{
i = i + 1;
i = i + _strlen_recursion(s + 1);
}
return (i);
}

