#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 up to 9
 * @q: q will be checked 
 * Description: Prints the numbers excluding 2 and 4
 *
 * Return: The numbers since 0 up to 9
 */
void print_more_numbers(void)
{
	int q = 0;

	for (; q <= 9; q++)
	{
		if (q == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(q + '0');
		}
	}

	_putchar('\n');
}
