#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int read = 0;
	int y, x;

	for (y = 0; s[y] != '\n'; y++)
	{
		read++;
	}
	for (x = (read - 1); x >= 0; x--)
	{
		putchar(s[x]);
	}
	putchar('\n');
}
