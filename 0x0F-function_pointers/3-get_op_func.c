#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - check the operator
 * @s: input operator
 * Return: 0.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int a;
        a = 0;
	while (a < 6)
	{
		if (ops[a].op[0] == s[0])
			return (ops[a].f);
	a++;
	}
	printf("Error\n");
	exit(99);
}
