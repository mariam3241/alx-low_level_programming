#include "main.h"

/**
 * _memset - a fun that fills memory with constatnt
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0 ; n > 0 ; i++)
{
s[i] = b;
n--;
}
return (s);
}
