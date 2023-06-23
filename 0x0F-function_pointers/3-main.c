#include "function_pointers.h"
#include <string.h>

/**
 * main - entry point.
 * @argc: arguments 
 * @argv: arguments
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int (*get)(int, int);
	int i, j, k;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	k = argv[2][0];
	switch (k)
	{
	case '+':
		break;
	case '-':
		break;
	case '*':
		break;
	case '/':
		break;
	case '%':
		break;
	default:
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	get = get_op_func(argv[2]);
	printf("%d\n", get(i, j));
	return (0);
}
