#include "main.h"

/**
 * print_triangle - checks for a digit 0 through 9
 * @size: size of vaiable
 * Return: Always 0
 */
void print_triangle(int size)
{
	int x, e;

	if (size > 0)
		for (x = size; x > 0; x--)
		{
			for (e = 1; e <= size; e++)
				if (e >= x)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
