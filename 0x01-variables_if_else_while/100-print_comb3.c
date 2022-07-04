#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int d;
int n;
for (d = 10; d <= 19; d++)
{
for (n = 10; n <= 19; n++)
{
if ((n % 10) > (d % 10))
{
putchar((d % 9) + '0');
putchar((n % 10) + '0');
if (d != 18 || n != 19)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
