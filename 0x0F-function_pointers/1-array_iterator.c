#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - a function that executes a function.
 * @array: array.
 * @size: the size of an array.
 * @action: a pointer to the function you need to use.
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
