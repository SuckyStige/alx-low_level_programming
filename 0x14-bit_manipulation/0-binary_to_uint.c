#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int str_len = 0, base = 1;
	unsigned int dec_val = 0;

	if (!check_valid_string(b))
		return (0);

	while (b[str_len] != '\0')
		str_len++;
	while (str_len)
	{
		dec_val += ((b[str_len - 1] - '0' * base));
				base *= 2;
				str_len--;
	}
	return (dec_val);
}

/**
 * check_valid_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_valid_string(const char *b)
{
if (b == NULL)
return (0);
while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}