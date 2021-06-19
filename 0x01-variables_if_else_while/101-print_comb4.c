#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
nt main(void)
{
int i;
int j;
int x;
for (i = 48; i < 57; i++)
{
for (j = 49; j <= 57; j++)
{
for (x = 50; x <= 57; x++)
{
if (j > i && x > j)
{
putchar(i);
putchar(j);
putchar(x);
if (i <= 55)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
