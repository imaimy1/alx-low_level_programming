#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: input
 * @av: input
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int l, n, k = 0, len = 0;
	char *st;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m]; m++)
			len++;
	}
	len += ac;

	st = malloc(sizeof(char) * len + 1);
	if (st == NULL)
		return (NULL);

	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m]; m++)
		{
			st[n] = av[l][m];
			n++;
		}
		if (st[n] == '\0')
		{
			st[n++] = '\n';
		}
	}
	return (st);
}
