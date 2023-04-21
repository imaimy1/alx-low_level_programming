#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  a function.
 * @array:  an array
 * @size:  the size
 * @action: pointer
 *
 * Return: 0.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
