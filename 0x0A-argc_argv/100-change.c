#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include "main.h"
/**
 * coinConverter -  function that does mathematics
 * @i: variable
 * Return: The number of coins.
 */
int coinConverter(int i)
{
	int ct = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i -= 2;
		else if (i % 25 == 0)
			i -= 25;
		else if (i % 10 == 0)
			i -= 10;
		else if (i % 5 == 0)
			i -= 5;
		else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i -= 1;
			else
				i -= 2;
		}
		else
			i -= 1;

		ct++;
	}

	return (ct);
}

/**
 * main - one argument for minimum coin count
 * @argc: Number of  arguments
 * @argv: Array
 * Return: 0 or 1 
 */
int main(int argc, char *argv[])
{
	int a, cn;

	cn = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);

	if (a < 0)
		printf("0\n");
	else
	{
		cn = coinConverter(a);

		printf("%d\n", cn);
	}

	return (0);
}
