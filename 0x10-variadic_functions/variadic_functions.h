#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct format - the data type of a format.
 * @print: the format.
 * @f: the function.
 *
 */

typedef struct format
{
	char *print;
	void (*f)(va_list all);
} f;
#endif
