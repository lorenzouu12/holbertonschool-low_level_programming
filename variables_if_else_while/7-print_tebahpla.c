#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);

putchar('\n');

return(0);
}
