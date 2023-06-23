#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - add numbers
 * @a: number 1
 * @b: number 2
 * Return: 0.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract numbers
 * @a: number 1.
 * @b: number 2.
 * Return: 0.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply  numbers
 * @a: number 1.
 * @b: number 2.
 * Return: 0.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div  numbers
 * @a: number 1.
 * @b: number 2.
 * Return: 0.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod numbers
 * @a: number 1.
 * @b: number 2.
 * Return: 0.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
