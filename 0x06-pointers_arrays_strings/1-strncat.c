#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: Copy to
 * @src: Copy from
 * @n: input of max bytes to be used
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[0] == '\0')
			co = n;
	}
	return (dest);
}
