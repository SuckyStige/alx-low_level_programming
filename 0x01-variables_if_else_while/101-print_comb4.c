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
int c;
for (c = 0; c < 90; c++)
{
for ()
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
}
if (c != 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
