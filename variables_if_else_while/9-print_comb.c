#include <stdio.h>

/**
 * main - print all posible combinations of all possible combinations
 * of a single-digit number.
 *
 * Return: Always 0
 */

int main(void)
{
int f;
for (f = '0'; f < 10; f++)
{
putchar (f + '0');
if (f < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
