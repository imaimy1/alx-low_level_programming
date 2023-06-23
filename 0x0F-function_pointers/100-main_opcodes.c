#include<stdio.h>
#include<stdlib.h>

/**
 * main- Entry point.
 *@argc: parameters.
 *@argv: parameeter.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int a, b;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
        b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < b; a++)
	{
		printf("%02hhx", *((char *)main + a));
		if (a < b - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
