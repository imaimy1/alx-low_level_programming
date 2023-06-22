#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * sum_them_all - the sum of all its parameters.
 * @n: number of arguments
 * Return: 0.
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int a;
	int sum = 0;
	

	va_start(val, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(val, int);
	}

	va_end(val);

	return (sum);
}
