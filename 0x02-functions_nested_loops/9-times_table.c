#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * tas1 = row, tas2 = column, das = digits of current result 
 *
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int tas1, tas2, das;
	
	for (tas1 = 0; tas2 <= 9; tas1++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (tas2 = 1; tas2 <= 9; tas2++)
		{
			das = (tas1 * tas2);
			if ((das / 10) > 0)
			{
				_putchar((das / 10) + '0')
			}
			else
			{
				_putchar(' ');
			}
			_putchar((das % 10) + '0');

			if (tas2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
