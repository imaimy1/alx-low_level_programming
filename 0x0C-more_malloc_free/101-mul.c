#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - Program that multiplies two positive numbers
 * @argc: input of n arguments
 * @argv: input of args
 * Return: int.
**/

int main(int argc, char *argv[])
{
	unsigned long mul;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > 58 || argv[a][b] < 49)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
