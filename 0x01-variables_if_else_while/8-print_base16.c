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
char  j;
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (j = 'A'; j <='F'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
