#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a fun that returns the sum of all its parameter
 * @n: parameter
 * @...: parameter
 * Return: 0 if n = 0, otherwise return the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);

}
