#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as a parameter on each element of an array.
 * @array: array.
 * @size: the size of an array.
 * @action: a pointer to the function you need to use.
 * Return: 0.
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
