#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swap the value of two integer
 * @a: input 1
 * @b: input 2
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
