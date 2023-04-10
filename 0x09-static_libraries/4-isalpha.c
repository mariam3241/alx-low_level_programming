#include "main.h"

/**
 * _isalpha - a fun that checks for alphabetic character
 * @c: parameter
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
