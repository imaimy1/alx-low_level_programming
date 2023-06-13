#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the input
 * Return: 0
 */

char *_strdup(char *str)
{
	char *x;
	unsigned int len, i;

	/* check if the str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	x = malloc(sizeof(char) * (len + 1));

	/*check if the malloc was successful*/
	if (x == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		x[i] = str[i];
	}
	x[len] = '\0';
	return (x);
}
