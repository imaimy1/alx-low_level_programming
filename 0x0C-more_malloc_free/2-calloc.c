#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: the input
 * @size: the  input
 * Return: 0
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *po;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	po = malloc(nmemb * size);
	if (po == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		po[i] = 0;
	return (po);
}
