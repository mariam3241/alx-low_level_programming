#include "main.h"

/**
 * _strlen_recursion - a fun that returns the length of a string
 * @s: parameter
 * Return: an intger value
 */

int _strlen_recursion(char *s)
{
int counter = 0;
if (*s)
{
counter = counter + 1;
counter += _strlen_recursion(s + 1);
}
return (counter);
}
