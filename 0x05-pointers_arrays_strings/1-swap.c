#include "main.h"
#include <stdio.h>
/*
 * File: 1-swap.c
 * Auth: halima
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
