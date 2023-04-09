#include "main.h"

/**
 * _isupper - a fun that check if the letters is in uppercase
 * @c: parameter
 * Return: an integer value
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
