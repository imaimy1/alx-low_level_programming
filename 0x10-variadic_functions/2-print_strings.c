#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints strings, followed by a new line.
  * @separator: separator of numbers
  * @n: number of arguments
  * Return: 0.
  */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stg;
	unsigned int i;
	char *st;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(stg, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(stg, char *);
		if (st == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", st);
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(stg);
}
