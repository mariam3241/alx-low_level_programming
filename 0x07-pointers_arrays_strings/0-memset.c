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
int a = 0;
for (; n > 0 ; a++)
{
s[a] = b;
n__;
}
return (s);
}
