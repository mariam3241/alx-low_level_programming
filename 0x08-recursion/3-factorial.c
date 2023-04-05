#include "main.h"

/**
 * factorial - a fun that prints the factorial of a given number
 * @n: parameter
 * Return: int number
 */


int factorial(int n)
{
	int fact;

	if (n == 0)
	{
		fact = 1;
		return (fact);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
