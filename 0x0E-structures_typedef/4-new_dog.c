#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog -  a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, k, j;
	dog_t *pn;

	pn = malloc(sizeof(dog_t));

	if (pn == NULL)
	{
		free(pn);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	pn->name = malloc(i + 1);
	pn->owner = malloc(j + 1);

	if (pn->name == NULL || pn->owner == NULL)
	{
		free(pn->name), free(pn->owner), free(pn);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		pn->name[k] = name[k];
	}
	pn->name[k] = '\0';
	for (k = 0; k < j; k++)
	{
		pn->owner[k] = owner[k];
	}
	pn->owner[k] = '\0';
	pn->age = age;
	return (pn);
}
