#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - Print character.
 * @form: e va_list
 * Return: 0.
 */

void print_c(va_list form)
{
	printf("%c", va_arg(form, int));
}

/**
 * print_i - Print Integer
 * @form: va_list
 * Return: 0.
 */

void print_i(va_list form)
{
	printf("%i", va_arg(form, int));
}

/**
 * print_f - print FLoat.
 * @form:  va_list.
 * Return: 0
 */

void print_f(va_list form)
{
	printf("%f", va_arg(form, double));
}

/**
 * print_s - print string
 * @form:  va_list
 * Return: 0.
 */

void print_s(va_list form)
{
	char *st;

	st = va_arg(form, char *);
	if (st == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", st);
}

/**
 * print_all -  prints anything.
 * @format: number of arguments.
 * Return: 0.
 */

void print_all(const char * const format, ...)
{

	va_list args;
	char *separator = "";
	unsigned int i, j;
	f ps[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		};

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (ps[j].print[0] == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				ps[j].f(args);
				break;
			}
			j++;
		}
	i++;
	}

	printf("\n");
	va_end(args);
}
