#include "main.h"

/**
 * clear_bit - sets a bit at a position to 0
 * @n: number to be used
 * @index: positions to be clear
 *
 * Return: 1 on success, -1 if otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
