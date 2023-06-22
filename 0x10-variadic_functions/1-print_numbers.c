#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers -  prints numbers, followed by a new line.
 * @n: The number of arguments
 * @separator: separator of numbers
 * Return: 0.
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
