#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int print_last_digit(int nod)
{
	int pnd;

	pnd = (nod % 10);

	if (pnd < 0)
	{
		pnd = (-1 * pnd);
	}
	_putchar(pnd + '0');
	return (pnd);
}
