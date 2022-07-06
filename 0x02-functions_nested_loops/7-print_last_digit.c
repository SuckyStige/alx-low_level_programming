#include "main.h"

/**
 * print_last_digit - a function that print the last digit of a number
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
