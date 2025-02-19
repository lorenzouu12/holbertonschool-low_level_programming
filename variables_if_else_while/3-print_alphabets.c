#include <stdio.h>

/**
* main - Entry point
*
* Description: Print the alphabet in lowercase, and uppercase,
* then in uppercase, followed by a new line.
*
* Return: Always 0
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar('\n');

return (0);
}
