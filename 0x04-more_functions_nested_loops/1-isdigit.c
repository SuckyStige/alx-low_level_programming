#include "main.h"

/**
 * _isdigit - Check if a character is a digits
 * @q: The number to be checked
 *
 * Return: 1 for a character that will be a digit or 0 for any else
 */
int _isdigit(int q)
{
	if (q >= 48 && q <= 57)
	{
		return (1);
	}
	
	return (0);
}

