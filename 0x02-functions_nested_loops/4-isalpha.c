#include "main.h"
/**
 * _isalpha - checks if char is a letter
 *@c: parameter
 *Return: 1 if letter and 0 orherwise
 */
int _isalpha(int c)
{
while (c >= 65 && c <= 122)
{
if (c >= 91 && c <= 96)
{
break;
return (0);
}
return (1);
}
return (0);
}
