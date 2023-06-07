#include "main.h"

/**
 * wildcmp - a fun that compares 2 strings
 * @s1: parameter
 * @s2: parameter
 * Return: 1 if the strings are identical and 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (*s2 == '\0');
}
if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}

