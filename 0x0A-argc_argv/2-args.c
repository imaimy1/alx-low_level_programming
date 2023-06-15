#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: Number of arguments
 * @argv: Array.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
