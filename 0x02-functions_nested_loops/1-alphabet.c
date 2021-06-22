#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char i;
print_alphabet();
for (i = 'a' ; i < 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
return (0);
}
