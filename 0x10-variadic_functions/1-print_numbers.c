#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * @...: variable number of numbers to be printed.
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nbs;
	unsigned int i;

	va_start(nbs, n);

	for (i = 0; i < n; i++)
        {
		printf("%d", va_arg(nbs, int));

		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}

        printf("\n");

        va_end(nbs);
}	
