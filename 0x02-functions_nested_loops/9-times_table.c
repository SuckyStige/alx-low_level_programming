#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * cas = row, bas = column, d = digits of current result
 *
 * Return:times table
 * add extra space past single digit
 */
void times_table(void)
{
	int cas, bas, das;
for (cas = 0; cas <= 9; cas++)	
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (bas = 1; bas <= 9; bas++)
		{
			das = (cas * bas);
			if ((das / 10) > 0)
			{
				_putchar((das / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((das % 10) + '0');

			if (bas < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
