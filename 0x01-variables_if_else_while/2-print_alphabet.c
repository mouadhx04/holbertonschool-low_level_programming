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
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
putchar("alphabet in lowercase", c);
}
putchar("\n");
return (0);
}
