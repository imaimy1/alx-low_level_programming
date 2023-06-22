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
	unsigned int i = 0;
	va_list ar;
	char *st;

	if (n > 0)
	{
		va_start(ar, n);

		while (i < n)
		{
			st = va_arg(ar, char *);
			if (st == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", st;

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

			i++;
		}

		va_end(ar);
	}

	printf("\n");
}
