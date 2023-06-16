#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: input
 * @max: input
 * Return: 0
 */


int *array_range(int min, int max)
{
	int a, b;
	int *p;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	p = malloc(sizeof(int) * b);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < b; a++, min++)
	{
		p[a] = min;
	}
	return (p);
}

