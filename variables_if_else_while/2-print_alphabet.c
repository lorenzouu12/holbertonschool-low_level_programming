#include <stdio.h>

/**
 * main - Entry point
 *
 * Descrption: Print the alphabet in lower case
 *
 * Return: Always 0
 */

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');

return (0);
}
