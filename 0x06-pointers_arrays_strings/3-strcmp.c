#include "main.h"

/**
 * _strcmp - a fun that compares 2 strings
 * @s1: parameter
 * @s2: 2nd parameter
 * Return: an int value
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
