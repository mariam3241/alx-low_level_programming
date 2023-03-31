#include "main.h"

/**
 * leet - a fun that encodes a string
 * @c: a parameter
 * Return: a string value
 */

char *leet(char *c)
{
int i, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (i = 0 ; c[i] != '\n' ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
if (c[i] == s1[j])
{
c[i] = s2[j];
}
}
}
return (c);
}
