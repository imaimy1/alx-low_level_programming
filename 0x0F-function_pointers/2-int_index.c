#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index -  function search for an integer.
 * @array: an array.
 * @size: size of an array.
 * @cmp: pointer to the functio to be used to compare values
 * Return: 0 or a.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size >= 0 && array != NULL && cmp != NULL)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
		}
	}
	return (-1);
}
