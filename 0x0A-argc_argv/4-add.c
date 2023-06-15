#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that adds positive numbers.
 * @argc: Number of  arguments
 * @argv: Array 
 * Return: 1 or  0 
 */

int main(int argc, char *argv[])
{
	int i, j, leng, s;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		s = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			leng = strlen(ptr);

			for (j = 0; j < leng; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			s += atoi(argv[i]);
		}

	printf("%d\n", s);
	}
	return (0);
}
