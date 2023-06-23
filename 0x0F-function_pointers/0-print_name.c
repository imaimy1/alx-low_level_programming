#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: person's name.
 * @f: print the name.
 * Return: 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
