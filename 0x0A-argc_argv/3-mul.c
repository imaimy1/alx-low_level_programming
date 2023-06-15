#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: Number of arguments
 * @argv: Array
 * Return: 1 or 0 
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;

		for (a = 1; a < 3; a++)
			b *= atoi(argv[a]);

		printf("%d\n", b);
	}

	return (0);
}
