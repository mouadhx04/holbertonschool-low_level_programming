#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char s, c;
for (c = 'a' ; c <= 'z' ; c++)
{
putchar(c);
}
for (s = 'A' ; s <= 'Z' ; s++)
{
putchar(s);
}
putchar('\n');
return (0);
}
