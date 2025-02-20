#include <stdio.h>

/**
 * main - print the alphabet in lowercase, and uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter, letr;

for (letter = 'a'; letter <= 'z' ; letter++)
{
putchar(letter);
}
for (letr = 'A'; letr <= 'Z' ; letr++)
{
putchar(letr);
}
putchar('\n');

return (0);
}
