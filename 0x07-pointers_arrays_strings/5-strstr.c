#include "main.h"

/**
 * _strstr - a fun that locates a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
for ( ; *haystack != '\0' ; haystack++)
{
while (*haystack == *needle && *needle != '\0')
{
haystack++;
needle++;
}
if (*needle == '\0')
{
return (haystack);
}
}
return (0);
}
