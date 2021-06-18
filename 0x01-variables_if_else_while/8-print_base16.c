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
char i, j;
for (i = 48; i <= 57; i++)
{
for (j = 'A'; j <='F'; j++)
{
putchar(i);
putchar(j);
}
}
putchar('\n');
return (0);
}
