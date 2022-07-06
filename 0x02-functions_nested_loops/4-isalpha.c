#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: single letter input
 *
 * Return: 1 if c is a letter (lower or Uppercase), 0 if otherwise
 */
int -isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
