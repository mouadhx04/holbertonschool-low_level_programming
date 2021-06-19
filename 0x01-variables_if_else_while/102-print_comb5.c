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
int i;
int j;
int x;
int s;
for (i = 48; i < 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (x = 48; x <= 57; x++)
{
for (s = 49; x <= 57; s++)
{
if (s > j)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(x);
putchar(s);
if (j < 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}


