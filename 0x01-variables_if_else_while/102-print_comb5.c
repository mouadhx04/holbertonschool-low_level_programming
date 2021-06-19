#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
int n = 0;
int m = 0;
for (n = 0; n < 100; n++)
{
for (m = n; m < 100; m++)
{
if (n != m)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
putchar(' ');
putchar((m / 10) + '0');
putchar((m % 10) + '0');
if (n == 98 && m == 99)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}


