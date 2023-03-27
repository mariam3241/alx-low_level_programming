#include "main.h"

/**
 * _strlen - a fun that returns the length of a string
 * @s: parameter of type char
 * Return: int value indecates the length
 */

int _strlen(char *s)
{
int result = 0;
while (*s++)
{
result++;
return (result);
}
}
