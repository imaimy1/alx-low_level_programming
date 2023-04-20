#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all function returns the sum of all its parameters.
 * @n: represent the number of the parameters.
 * @...: variable number of parameters to calculate the sum.
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
        va_list a;
        unsigned int i, sum = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
	        sum += va_arg(a, int);

	va_end(a);

	return (sum);
}	


