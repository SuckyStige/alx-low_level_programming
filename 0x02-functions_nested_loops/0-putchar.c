#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on Error, -1 is returned, and erron is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}